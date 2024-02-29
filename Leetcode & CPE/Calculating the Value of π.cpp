/*
calculate of pi(Leibniz series)
4- 4/3 + 4/5 - 4/7 + 4/9...
分數相隔1會變號
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double pi = 4;
    int son, flag = 0;

    for (int i = 0; i < 1000000; i++)
    {
        son = i * 2 + 3;
        if (i % 2 == 00)
            pi -= 4.0 / son;
        else
            pi += 4.0 / son;

        if (flag < 1 && trunc(100 * pi) == 314)
        {
            cout << "found 3.14 at iteration " << i << endl;
            flag++;
        }
        if (flag < 2 && trunc(1000 * pi) == 3141)
        {
            cout << "found 3.141 at iteration " << i << endl;
            flag++;
        }
        if (flag < 3 && trunc(10000 * pi) == 31415)
        {
            cout << "found 3.1415 at iteration " << i << endl;
            flag++;
        }
        if (flag < 4 && trunc(100000 * pi) == 314159)
        {
            cout << "found 3.14159 at iteration " << i << endl;
            flag++;
        }
    }
}
