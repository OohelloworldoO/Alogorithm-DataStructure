/*
我把題目想太難了
給的數字是同位數
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, temp = 0, A, B;
    while (cin >> a >> b)
    {
        cin.ignore();
        int count = 0, c = 0;
        if (a == 0 && b == 0)
            break;

        while (a > 0 || b > 0)
        {
            A = a % 10;
            a /= 10;
            B = b % 10;
            b /= 10;
            temp = A + B + c;
            if (temp >= 10)
            {
                count++;
                c += 1;
            }
            else
                c = 0;
        }
        if (count > 0)
            cout << count << " carry operations." << endl;
        else
            cout << "No carry operation." << endl;
    }
}