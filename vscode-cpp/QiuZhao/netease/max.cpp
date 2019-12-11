#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int s1 = a + b + c;
    int s2 = a * b * c;
    int s3 = a + b * c;
    int s4 = (a + b) * c;
    int s5 = a * b + c;
    int s6 = a * (b + c);
    vector<int> nums{s1, s2, s3, s4, s5, s6};
    cout << *max_element(nums.begin(), nums.end());
}