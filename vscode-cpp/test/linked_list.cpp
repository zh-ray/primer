#include <iostream>
#include <limits>
#include <vector>

using namespace std;

struct ListNote
{
	int val;
	struct ListNote *next;
	ListNote(int x) : val(x), next(NULL) {}
};

vector<int> topN(vector<ListNote *> lists, int N)
{
	vector<int> result;
	for (size_t i = 0; i < N; i++)
	{
		int max_temp = numeric_limits<int>::min();
		int flag = 0;
		for (size_t j = 0; j < lists.size(); j++)
		{
			if (lists[j] != NULL && lists[j]->val > max_temp)
			{
				max_temp = lists[j]->val;
				flag = j;
			}
		}
		result.push_back(lists[flag]->val);
		lists[flag] = lists[flag]->next;
	}
	return result;
}

int main()
{
	// n = 10, k = 4
	vector<int> l1{ 8, 6, 4, 2, 1 };
	vector<int> l2{ 18, 12, 7, 5, 3 };
	vector<int> l3{ 25, 20, 19, 16, 10 };
	vector<int> l4{ 27, 9, 3, 2, 1 };
	ListNote *list1 = new ListNote(NULL);
	ListNote *list2 = new ListNote(NULL);
	ListNote *list3 = new ListNote(NULL);
	ListNote *list4 = new ListNote(NULL);
	ListNote *end1 = list1;
	ListNote *end2 = list2;
	ListNote *end3 = list3;
	ListNote *end4 = list4;

	for (size_t i = 0; i < l1.size(); i++)
	{
		ListNote *temp = new ListNote(l1[i]);
		end1->next = temp;
		end1 = temp;
	}
	for (size_t i = 0; i < l2.size(); i++)
	{
		ListNote *temp = new ListNote(l2[i]);
		end2->next = temp;
		end2 = temp;
	}
	for (size_t i = 0; i < l3.size(); i++)
	{
		ListNote *temp = new ListNote(l3[i]);
		end3->next = temp;
		end3 = temp;
	}
	for (size_t i = 0; i < l4.size(); i++)
	{
		ListNote *temp = new ListNote(l4[i]);
		end4->next = temp;
		end4 = temp;
	}

	vector<ListNote *> lists{ list1->next, list2->next, list3->next, list4->next };
	int N = 10;
	vector<int> result = topN(lists, N);
	for (size_t i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

	return 0;
}