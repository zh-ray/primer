#include <iostream>
#include <vector>
#include <map>

using namespace std;
using std::map;

int main()
{
    int target, n_num;
    vector<int> nums;
    cin >> target >> n_num;
    for (size_t i = 0; i < n_num; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }


    map<int, int> map_num;
    vector<int> result;
    for (size_t i = 0; i < n_num; i++)
    {
        if(map_num.find(target - nums[i]) != map_num.end())
        {
            result.push_back(map_num[target - nums[i]]);
            result.push_back(i);
            break;
        }
        else
        {
            map_num[nums[i]] = i;
        }

    }
    cout << result[0] << " " << result[1] << endl;

}