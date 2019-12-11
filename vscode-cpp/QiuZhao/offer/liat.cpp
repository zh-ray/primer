#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL)
    {
    }
};
class Solution
{
public:
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k)
    {
        stack<ListNode *> result;
        int count = 0;
        while (pListHead != NULL)
        {
            result.push(pListHead);
            pListHead = pListHead->next;
            count++;
        }
        if (count < k)
        {
            return NULL;
        }
        int times = k - 1;
        while (times--)
        {
            result.pop();
        }
        return result.top();
    }
};
int main()
{
    vector<int> l1{ 8, 6, 4, 2, 1 };
    ListNode *list1 = new ListNode(NULL);
    ListNode *end1 = list1;
    for (size_t i = 0; i < l1.size(); i++)
	{
		ListNode *temp = new ListNode(l1[i]);
		end1->next = temp;
		end1 = temp;
	}
    Solution s;
    ListNode *result = s.FindKthToTail(list1, 3);
    cout << result->val;
}