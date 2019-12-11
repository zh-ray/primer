#include <io.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
const int PRODUCT_NUM = 100; // 产品数量
CRITICAL_SECTION cs;         // 定义临界区全局变量
HANDLE emptyEvent;           // 存在空位事件
HANDLE fullEvent;            // 存在数据事件
static int full = 0;         // 缓冲区数据个数
static int empty = 10;       // 缓冲区空位个数
static int Buffer[10];       // 缓冲区
static int len = 10;         // 缓冲区长度
// 将缓冲区视为一个队列
static int tail = -1; // 缓冲区尾指针
static int head = 0;  // 缓冲区头指针
// 产品与消费计数
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
// 生产则进程
DWORD WINAPI ProducerThread(void *a)
{
    int data = 0;
    int *dataRange = (int *)a; // 数据范围
    while (TRUE)
    {
        if (productCount >= PRODUCT_NUM)
        {
            break;
        }

        // P操作
        P(&empty);
        // 没有空位，等待消费者消费数据
        if (empty <= 0)
        {
            WaitForSingleObject(emptyEvent, INFINITE);
        }
        // 进入临界区
        EnterCriticalSection(&cs);
        data = rand() % (dataRange[1] - dataRange[0] + 1) + dataRange[0]; // 随机数据
        Buffer[(++tail) % len] = data;
        printf("生产者%d生产第%d个数据%d.\n", dataRange[2], ++productCount, data);
        // 鍐欏叆鏂囦欢
        // fprintf(file, "鐢熶骇鑰?%d鐢熶骇绗?%d涓暟鎹?%d.\n", dataRange[2], productCount, data);
        LeaveCriticalSection(&cs);
        Sleep(rand() % 100 + 1); // 随机睡眠1-100ms
        V(&full);
        if (full > 0)
        {
            SetEvent(fullEvent);
        }
    }
    return 0;
}
// 消费进程
DWORD WINAPI ConsumerThread(void *a)
{
    int data = 0;
    int *flag = (int *)a; // 消费者编号
    while (TRUE)
    {
        if (consumeCount >= PRODUCT_NUM)
        {
            break;
        }
        // P操作
        P(&full);
        // 没有数据，等待生产者生产数据
        if (full <= 0)
        {
            WaitForSingleObject(fullEvent, INFINITE);
        }
        // 进入临界区
        EnterCriticalSection(&cs);
        data = Buffer[head % len];
        head = (head + 1) % len;
        printf("\t\t\t消费者%d消费第%d个数据%d.\n", *flag, ++consumeCount, data);
        // fprintf(file, "\t\t\t娑堣垂鑰?%d娑堣垂绗?%d涓暟鎹?%d.\n", *flag, consumeCount, data);
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
    InitializeCriticalSection(&cs); // 初始化临界区
    emptyEvent = CreateEvent(NULL, false, true, NULL);
    fullEvent = CreateEvent(NULL, false, false, NULL);
    // static char *filename = "log.txt";
    // fopen_s(&file, filename, "r+");
    HANDLE handle[5];
    int a1[3] = {1000, 1999, 1};
    int a2[3] = {2000, 2999, 2};
    // 创建生产线程
    handle[0] = CreateThread(NULL, 0, ProducerThread, a1, 0, NULL);
    handle[1] = CreateThread(NULL, 0, ProducerThread, a2, 0, NULL);
    // 对消费者标号
    int *flag1 = (int *)malloc(sizeof(int *)), *flag2 = (int *)malloc(sizeof(int *)), *flag3 = (int *)malloc(sizeof(int *));
    *flag1 = 1;
    *flag2 = 2;
    *flag3 = 3;
    // 消费者线程
    handle[2] = CreateThread(NULL, 0, ConsumerThread, flag1, 0, NULL);
    handle[3] = CreateThread(NULL, 0, ConsumerThread, flag2, 0, NULL);
    handle[4] = CreateThread(NULL, 0, ConsumerThread, flag3, 0, NULL);
    WaitForMultipleObjects(5, handle, TRUE, INFINITE);

    getchar();
    return 0;
}