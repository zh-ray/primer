#include <io.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
const int PRODUCT_NUM = 100; // ��Ʒ����
CRITICAL_SECTION cs;         // �����ٽ���ȫ�ֱ���
HANDLE emptyEvent;           // ���ڿ�λ�¼�
HANDLE fullEvent;            // ���������¼�
static int full = 0;         // ���������ݸ���
static int empty = 10;       // ��������λ����
static int Buffer[10];       // ������
static int len = 10;         // ����������
// ����������Ϊһ������
static int tail = -1; // ������βָ��
static int head = 0;  // ������ͷָ��
// ��Ʒ�����Ѽ���
static int productCount = 0;
static int consumeCount = 0;

 // static FILE *file;
int P(int *i)
{
    return --*i;
}
int V(int *i)
{
    return ++*i;
}
// ���������
DWORD WINAPI ProducerThread(void *a)
{
    int data = 0;
    int *dataRange = (int *)a; // ���ݷ�Χ
    while (TRUE)
    {
        if (productCount >= PRODUCT_NUM)
        {
            break;
        }

        // P����
        P(&empty);
        // û�п�λ���ȴ���������������
        if (empty <= 0)
        {
            WaitForSingleObject(emptyEvent, INFINITE);
        }
        // �����ٽ���
        EnterCriticalSection(&cs);
        data = rand() % (dataRange[1] - dataRange[0] + 1) + dataRange[0]; // �������
        Buffer[(++tail) % len] = data;
        printf("������%d������%d������%d.\n", dataRange[2], ++productCount, data);
        // 写入文件
        // fprintf(file, "生产�?%d生产�?%d个数�?%d.\n", dataRange[2], productCount, data);
        LeaveCriticalSection(&cs);
        Sleep(rand() % 100 + 1); // ���˯��1-100ms
        V(&full);
        if (full > 0)
        {
            SetEvent(fullEvent);
        }
    }
    return 0;
}
// ���ѽ���
DWORD WINAPI ConsumerThread(void *a)
{
    int data = 0;
    int *flag = (int *)a; // �����߱��
    while (TRUE)
    {
        if (consumeCount >= PRODUCT_NUM)
        {
            break;
        }
        // P����
        P(&full);
        // û�����ݣ��ȴ���������������
        if (full <= 0)
        {
            WaitForSingleObject(fullEvent, INFINITE);
        }
        // �����ٽ���
        EnterCriticalSection(&cs);
        data = Buffer[head % len];
        head = (head + 1) % len;
        printf("\t\t\t������%d���ѵ�%d������%d.\n", *flag, ++consumeCount, data);
        // fprintf(file, "\t\t\t消费�?%d消费�?%d个数�?%d.\n", *flag, consumeCount, data);
        LeaveCriticalSection(&cs);
        Sleep(rand() % 100 + 1);
        V(&empty);
        if (empty > 0)
        {
            SetEvent(emptyEvent);
        }
    }
    return 0;
}

int main()
{
    srand((unsigned int)(time(NULL)));
    InitializeCriticalSection(&cs); // ��ʼ���ٽ���
    emptyEvent = CreateEvent(NULL, false, true, NULL);
    fullEvent = CreateEvent(NULL, false, false, NULL);
    // static char *filename = "log.txt";
    // fopen_s(&file, filename, "r+");
    HANDLE handle[5];
    int a1[3] = {1000, 1999, 1};
    int a2[3] = {2000, 2999, 2};
    // ���������߳�
    handle[0] = CreateThread(NULL, 0, ProducerThread, a1, 0, NULL);
    handle[1] = CreateThread(NULL, 0, ProducerThread, a2, 0, NULL);
    // �������߱��
    int *flag1 = (int *)malloc(sizeof(int *)), *flag2 = (int *)malloc(sizeof(int *)), *flag3 = (int *)malloc(sizeof(int *));
    *flag1 = 1;
    *flag2 = 2;
    *flag3 = 3;
    // �������߳�
    handle[2] = CreateThread(NULL, 0, ConsumerThread, flag1, 0, NULL);
    handle[3] = CreateThread(NULL, 0, ConsumerThread, flag2, 0, NULL);
    handle[4] = CreateThread(NULL, 0, ConsumerThread, flag3, 0, NULL);
    WaitForMultipleObjects(5, handle, TRUE, INFINITE);

    getchar();
    return 0;
}