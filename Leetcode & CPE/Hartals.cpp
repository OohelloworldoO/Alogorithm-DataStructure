#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, day, political_party, hartal[100] = {0}, day_outofWork[100] = {0}, friday[100] = {0}, saturday[100] = {0};
    cin >> n;
    while (n--)
    {
        int count = 0;
        cin >> day;
        count = day;
        if (day > 3650 || day < 7)
            break;

        cin >> political_party; // 總政黨數

        if (political_party > 100 || political_party < 1)
            break;

        for (int i = 0; i < political_party; i++) // 每個政黨罷工日 但是要注意hartal的lcm會重疊!
            cin >> hartal[i];

        for (int i = 0; i < political_party; i++)
            cout << hartal[i] << " ";
        }
}