#include <iostream>
#include <vector>
using namespace std;
typedef struct node
{
    int sno;
    struct node *prior, *next;
} stud;
stud *initNode(vector<int> nums)
{
    stud *p, *h, *s;
    int len = nums.size();
    h = (stud *)malloc(sizeof(stud));
    h->sno = NULL;
    h->next = nullptr;
    h->prior = nullptr;
    p = h;
    for (int i = 0; i < len; i++)
    {
        s = (stud *)malloc(sizeof(stud));
        p->next = s;
        s->sno = nums[i];
        s->prior = p;
        s->next = nullptr;
        p = s;
    }
    p->next = nullptr;
    return h;
}
stud *reverseNode(stud *head)
{
    stud *p, *r, *h;
    h = head->next;
    if (h && h->next)
    {
        p = h;
        r = p->next;
        p->next = nullptr;
        while (r)
        {
            p = r;
            r = r->next;
            p->next = h;
            h->prior = p;
            h = p;
        }
        head->next = h;
        h->prior = head;
        return head;
    }
    else
    {
        return nullptr;
    }
}
void printNode(stud *list)
{
    while (list)
    {
        cout << list->sno << " ";
        list = list->next;
    }
}
int main()
{
    vector<int> nums;
    int num;
    do
    {
        cin >> num;
        nums.push_back(num);
    } while (getchar() != '\n');
    stud *head = initNode(nums);
    head = reverseNode(head);
    printNode(head->next);
    return 0;
};