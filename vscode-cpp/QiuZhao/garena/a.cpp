#include <cstdio>
#include <cstdlib>
#include <stack>
using namespace std;

struct Node
{
    int value;
    struct Node *next;
};

// 完成下面的函数
// list1 第一个链表的头节点
// list2 第二个链表的头节点
// merged 合并后的链表的头节点
// 所有链表都使用头节点表示
void merge_reverse(Node *list1, Node *list2, Node *merged)
{
    stack<Node *> stack1;
    stack<Node *> stack2;

    while (list1->next != NULL)
    {
        list1 = list1->next;
        stack1.push(list1);
    }
    while (list2->next != NULL)
    {
        list2 = list2->next;
        stack2.push(list2);
    }
    int temp1;
    int temp2;
    Node *l1;
    Node *l2;

    Node *end = merged;
    while (stack1.size() || stack2.size())
    {

        if (stack1.empty())
        {
            temp1 = 0x80000000;
        }
        else
        {
            l1 = stack1.top();
            temp1 = l1->value;
        }
        if (stack2.empty())
        {
            temp2 = 0x80000000;
        }
        else
        {
            l2 = stack2.top();
            temp2 = l2->value;
        }

        if (temp1 > temp2)
        {
            l1->next = end->next;
            end->next = l1;
            end = l1;
            stack1.pop();
        }
        else
        {
            l2->next = end->next;
            end->next = l2;
            end = l2;
            stack2.pop();
        }
    }
    end->next = NULL;
}

// 不要修改下面的内容
void parse_list(Node *header)
{
    int M = 0;
    scanf("%d", &M);
    int j = 0;
    Node *p = header;
    for (j = 0; j < M; j++)
    {
        int d = 0;
        scanf("%d", &d);
        Node *node = new (Node);
        node->value = d;
        node->next = NULL;
        p->next = node;
        p = node;
    }
}

void print_list(Node *header, int rank)
{
    // output
    Node *p = header->next;
    printf("%d", rank);
    while (p)
    {
        printf(" %d", p->value);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    Node list1 = {0, NULL};
    Node list2 = {0, NULL};
    Node merged = {0, NULL};

    int N = 0;
    scanf("%d", &N);

    int i = 0;
    for (i = 0; i < N; i++)
    {
        parse_list(&list1);
        parse_list(&list2);
        merge_reverse(&list1, &list2, &merged);
        print_list(&merged, i + 1);
        list1.next = NULL;
        list2.next = NULL;
        merged.next = NULL;
    }
}