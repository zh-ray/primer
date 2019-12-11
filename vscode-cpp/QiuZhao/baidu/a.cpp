#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *remove(ListNode *head, int n)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    ListNode *first = head;
    while (n-- != 0)
    {
        first = first->next;
        if (first == nullptr)
        {
            return head;
        }
    }
    if (!first)
    {
        return head->next;
    }
    ListNode *second = head;
    while (first->next != nullptr)
    {
        second = second->next;
        first = first->next;
    }
    second->next = second->next->next;
    return head;
}

int main()
{
}