#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int(*windows)[4] = new int[N][4];
    vector<int> seqs;
    for (size_t i = 0; i < N; i++)
    {
        cin >> windows[i][0] >> windows[i][1] >> windows[i][2] >> windows[i][3];
        seqs.push_back(i);
    }
    int(*mouses)[2] = new int[M][2];
    for (size_t i = 0; i < M; i++)
    {
        cin >> mouses[i][0] >> mouses[i][1];
    }


    for (size_t i = 0; i < M; i++)
    {
        int x_click = mouses[i][0];
        int y_click = mouses[i][1];
        bool flag = true;

        for (size_t j = seqs.size(); j != 0; j--)
        {
            if (x_click >= windows[seqs[j-1]][0] && x_click <= windows[seqs[j-1]][0] + windows[seqs[j-1]][2] && y_click >= windows[seqs[j-1]][1] && y_click <= windows[seqs[j-1]][1] + windows[seqs[j-1]][3])
            {
                int result = seqs[j-1];
                cout << seqs[j-1] + 1 << endl;
                seqs.erase(seqs.begin() + j - 1);
                seqs.push_back(result);
                flag = false;
                break;
            }

        }
        if (flag)
        {
            cout << -1 << endl;
            break;
        }
    }

    delete[] windows;
    delete[] mouses;
}