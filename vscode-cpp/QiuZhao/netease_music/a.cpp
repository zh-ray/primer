#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double n;
    cin >> n;
    vector<int> grades;
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        grades.push_back(temp);
    }

    int q;
    cin >> q;
    vector<int> queries;
    for (size_t i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        queries.push_back(temp);
    }

    for (auto query : queries)
    {
        int count = 0;
        for (auto grade : grades)
        {
            if (grades[query-1] >= grade)
            {
                count++;
            }
        }

        printf("%.6f", ((count - 1) * 100) / n);
        cout << endl;
    }
}