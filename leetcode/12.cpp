#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, day, political_party, hartal[500] = {0}, day_outofWork = 0, friday[500] = {0}, saturday[500] = {0}, count;
    cin >> n;
    while (n--)
    {
        cin >> day;
        count = day;
        if (day > 3650 || day < 7)
            break;

        cin >> political_party; // 總政黨數

        if (political_party > 100 || political_party < 1)
            break;

        for (int i = 0; i < political_party; i++) // 每個政黨罷工日 但是要注意hartal的lcm會重疊!
            cin >> hartal[i];

        for (int i = 0; i < day; i++) // saturday = friday[i]'s parameter +1
        {
            friday[0] = 6;
            friday[i + 1] += 7;
        }
        // for (int i = 1; i < day / hartal[i]; i++)
        // {
        //     saturday[0] = 7;
        //     saturday[i + 1] += 7;
        // }

        for (int i = 0; i < political_party; i++)
        {
            for (int j = 0; j < political_party; j++)
            {
                if (friday[j] % hartal[i] != 0)
                {
                    count--;
                    friday[j] = 0;
                    sort(friday, friday + day, greater<int>());
                }
            }

            for (int j = 0; j < political_party; j++)
            {
                if (saturday[j] % hartal[i] != 0)
                {
                    count--;
                    saturday[j] = 0;
                    sort(saturday, saturday + day, greater<int>());
                }
            }
        }
        cout << count << endl;
    }
}