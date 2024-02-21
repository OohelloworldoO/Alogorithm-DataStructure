// 需要包含1~n-1的所有數字
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b[3000] = {0}, c[3000] = {0};
    while (cin >> a)
    {
        int flag = 0;
        if (a >= 3000)
            break;
        if (a == 1)
        {
            cin >> b[0];
            cout << "Not jolly" << endl;
            break;
        }
        for (int i = 0; i < a; i++)
            cin >> b[i];

        for (int i = 0; i < a - 1; i++)
        {
            c[i] = abs(b[i] - b[i + 1]);
        }
        for (int i = 0; i < a - 1; i++)
        {
            for (int j = 0; j < a - 1; j++)
            {
                if (c[j] == i + 1)
                    flag++;
            }
        }

        if (flag >= a - 1)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
}