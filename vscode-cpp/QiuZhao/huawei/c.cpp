#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int N_number;
    cin >> N_number;
    vector<int> numA;
    vector<int> numB;
    vector<vector<int>> record(N_number + 1, vector<int>(N_number + 1));
    for (size_t i = 0; i < N_number; i++)
    {
        int temp;
        cin >> temp;
        numA.push_back(temp);
    }
    for (size_t i = 0; i < N_number; i++)
    {
        int temp;
        cin >> temp;
        numB.push_back(temp);
    }
    for (int i = 0; i <= N_number; i++)
    {
        for (int j = 0; j <= N_number; j++)
        {
            if (i == 0 || j == 0)
            {
                record[i][j] = 0;
            }
            else if (i > 0 && j > 0 && numA[i] == numB[j])
            {
                record[i][j] = record[i - 1][j - 1] + 1;
            }
            else
            {
                record[i][j] = record[i - 1][j] > record[i][j - 1] ? record[i - 1][j] : record[i][j - 1];
            }
        }
    }

    cout << N_number - record[N_number][N_number] << endl;
    return 0;
}