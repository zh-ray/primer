#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool IsFind(int temp1,int temp2,int temp3,int temp4,vector<int> &intput)
{
    if(find(intput.begin(), intput.end(), temp1) != intput.end()||find(intput.begin(), intput.end(), temp2) != intput.end()||find(intput.begin(), intput.end(), temp3) != intput.end()||find(intput.begin(), intput.end(), temp4) != intput.end())
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    vector<int> input;
    char c;
    while ((c = getchar()) != NULL)
    {
        ungetc(c, stdin);
        for (size_t i = 0; i < 6; i++)
        {
            int temp;
            cin >> temp;
            input.push_back(temp);
        }
        int up = 0, down = 0, left = 0, right = 0;
        bool flag = true;
        for (int i : input)
        {
            if (i/1==0)
            {
                up = 0;
            }
            else
            {
                up = i - 10;
            }
            if (i/1==4)
            {
                down = 0;
            }
            else
            {
                down = i + 10;
            }
            if (i%10==1)
            {
                left = 0;
            }
            else
            {
                left = i - 1;
            }
            if (i%10==5)
            {
                right = 0;
            }
            else
            {
                right = i +1;
            }
            if (IsFind(up,down,left,right,input))
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        input.clear();
    }
    return 0;
}