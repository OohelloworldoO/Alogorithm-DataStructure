#include <bits/stdc++.h>

#pragma GCC optimize("Ofast", "unroll-loops", "no-stack-protector")
using namespace std;

int main()
{
    int x, y, v, vv[11], xx[10] = {0}, yy[10] = {0}, s;
    for (s = 0, cin >> x >> y; x != 0 || y != 0; s = 0, cin >> x >> y)
    {
        xx[0] = x % int(pow(10, 1));
        x -= x % int(pow(10, 1));
        yy[0] = y % int(pow(10, 1));
        y -= y % int(pow(10, 1));
        vv[0] = xx[0] + yy[0];
        if (vv[0] > 9)
        {
            vv[0] -= 10;
            s++;
            vv[1] = 1;
        }
        else
        {
            vv[1] = 0;
        }
        for (v = 1; v <= 10; v++)
        {
            xx[v] = x % int(pow(10, v + 1)) / int(pow(10, v));
            x -= x % int(pow(10, v + 1));
            yy[v] = y % int(pow(10, v + 1)) / int(pow(10, v));
            y -= y % int(pow(10, v));
            vv[v] += xx[v] + yy[v];

            if (vv[v] > 9)
            {
                vv[v] -= 10;
                s++;
                vv[v + 1] = 1;
            }
            else
            {
                vv[v + 1] = 0;
            }
        }
        if (s == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if (s == 1)
        {
            cout << s << " carry operation." << endl;
        }
        else if (s > 1)
        {
            cout << s << " carry operations." << endl;
        }
    }
    return 0;
}