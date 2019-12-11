#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMinimumMoves' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int getMinimumMoves(vector<int> arr)
{
    int n = arr.size();
    vector<int> brr;
    brr = arr;
    sort(brr.begin(), brr.end());
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int pos = lower_bound(brr.begin(), brr.end(), num) - brr.begin();
        arr[i] = pos;
    }
    int cur = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == cur)
        {
            cur++;
            count++;
        }
    }
    return n - count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++)
    {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = getMinimumMoves(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
