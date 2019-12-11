#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
struct job
{
    int cost;
    int deadline;
};
bool comp(job &a, job &b)
{
    return a.deadline < b.deadline;
}
int main()
{
    int n;
    cin >> n;
    vector<job> jobs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> jobs[i].deadline >> jobs[i].cost;
    }
    sort(jobs.begin(), jobs.end(), comp);
    int start = 0;
    int lateness = 0;
    for (int i = 0; i < n; i++)
    {
        start += jobs[i].cost;
        lateness += max(0, start - jobs[i].deadline);
    }
    cout << lateness << endl;
    return 0;
}