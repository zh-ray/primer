#include <iostream>
#include <vector>
using namespace std;

struct RandomListNode
{
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL)
    {
    }
};

class Solution
{
public:
    RandomListNode *Clone(RandomListNode *pHead)
    {
        RandomListNode *copyHead = new RandomListNode(NULL);
        if (pHead == NULL)
        {
            return NULL;
        }
        RandomListNode *moveNode = pHead;
        while (moveNode != NULL)
        {
            RandomListNode *copyNode = new RandomListNode(moveNode->label);
            RandomListNode *nextNode = moveNode->next;
            moveNode->next = copyNode;
            copyNode->next = nextNode;
            moveNode = nextNode;
        }
        moveNode = pHead;
        while (moveNode != NULL)
        {
            if (moveNode->random != NULL)
            {
                moveNode->next->random = (moveNode->random)->next;
            }
            moveNode = moveNode->next->next;
        }
        moveNode = pHead;
        RandomListNode *copyNode = copyHead;
        while (moveNode != NULL)
        {
            copyNode->next = moveNode->next;
            copyNode = copyNode->next;
            moveNode->next = copyNode->next;
            moveNode = moveNode->next;
            copyNode->next = NULL;
        }
        return copyHead->next;
    }
};

int main()
{
    vector<int> n{1, 2, 3};
    RandomListNode *pHead = new RandomListNode(NULL);
    RandomListNode *end = pHead;
    for (int i = 0; i < n.size(); i++)
    {
        RandomListNode *temp = new RandomListNode(n[i]);
        end->next = temp;
        end = end->next;
    }
    pHead = pHead->next;
    Solution s;
    RandomListNode *copyHead = s.Clone(pHead);
    while (copyHead != NULL)
    {
        cout << copyHead->label << endl;
        copyHead = copyHead->next;
    }
    return 0;
}