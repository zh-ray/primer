#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int N_sample;
    cin >> N_sample;
    for (size_t i = 0; i < N_sample; i++)
    {
        int N_groups;
        cin >> N_groups;
        if (N_groups <= 2)
        {
            cout << 0 << endl;
            continue;
        }
        priority_queue<int> N_people;
        for (size_t j = 0; j < N_groups; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 0)
            {
                continue;
            }
            N_people.push(temp);
        }

        int count = 0;
        while (N_people.size() > 2)
        {
            int temp1, temp2, temp3;
            temp1 = N_people.top();
            N_people.pop();
            temp2 = N_people.top();
            N_people.pop();
            temp3 = N_people.top();
            N_people.pop();
            count++;
            temp3--;
            temp2--;
            temp1--;
            if (temp3 > 0)
            {
                N_people.push(temp3);
            }
            if (temp2 > 0)
            {
                N_people.push(temp2);
            }
            if (temp1 > 0)
            {
                N_people.push(temp1);
            }
        }
        cout << count << endl;
    }
}