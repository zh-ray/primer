#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

/*请完成下面这个函数，实现题目要求的功能
******************************开始写代码******************************/
ListNode *partition(ListNode *head, int m)
{
    ListNode *minHead = new ListNode(NULL);
    ListNode *maxHead = new ListNode(NULL);
    ListNode *min = minHead;
    ListNode *max = maxHead;
    ListNode *p = head;
    while (p != NULL)
    {
        if (p->val <= m)
        {
            min->next = p;
            min = min->next;
        }
        else
        {
            max->next = p;
            max = max->next;
        }
        p = p->next;
    }
    if (minHead->next == NULL)
    {
        return head;
    }
    else
    {
        min->next = maxHead->next;
        max->next = NULL;
        return minHead->next;
    }
}
/******************************结束写代码******************************/

int main()
{
    ListNode *head = NULL;
    ListNode *node = NULL;
    int m;
    cin >> m;
    int v;
    while (cin >> v)
    {
        if (head == NULL)
        {
            node = new ListNode(v);
            head = node;
        }
        else
        {
            node->next = new ListNode(v);
            node = node->next;
        }
    }
    head = partition(head, m);
    if (head != NULL)
    {
        cout << head->val;
        node = head->next;
        delete head;
        head = node;
        while (head != NULL)
        {
            cout << "," << head->val;
            node = head->next;
            delete head;
            head = node;
        }
    }
    cout << endl;
    return 0;
}
