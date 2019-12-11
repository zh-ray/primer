#include <iostream>
using namespace std;
int main()
{
    int N_sample;
    cin >> N_sample;
    int M, A1, H1, A2, B2, H2, C1, C2, C;
    for (size_t i = 0; i < N_sample; i++)
    {
        cin >> M >> A1 >> H1 >> A2 >> B2 >> H2 >> C1 >> C2 >> C;
        if (M < C)
        {
            // 买不起投石机
            cout << 0 << endl;
        }
        else
        {
            int remain = M - C; // 买完投石机剩余的钻石
            int result = -1;
            for (size_t x = 0; x <= remain; x++) // x表示用来升级攻击力的钻石数量
            {
                int harm = 0;

                int power = A2 + x / C1;              // 此时的攻击力
                int defence = B2 + (remain - x) / C2; // 此时的防御力
                if (defence >= A1)
                {
                    harm = H1;
                    result = result > harm ? result : harm;
                    break;
                }
                int h1_temp = H1;                     // 敌方血量
                int h2_temp = H2;                     // 己方血量
                while (h2_temp && h1_temp)
                {
                    // 计算双方损失血量
                    h1_temp -= power;
                    if (A1 > defence)
                    {
                        h2_temp -= (A1 - defence);
                    }

                    if (h1_temp < 0)
                    {
                        // 若破城，计算最后一次伤害
                        harm += (h1_temp + power);
                        h1_temp = 0;
                    }
                    else
                    {
                        harm += power;
                    }

                    if (h2_temp < 0)
                    {
                        h2_temp = 0;
                    }
                }
                result = result > harm ? result : harm;
            }
            cout << result << endl;
        }
    }
    return 0;
}