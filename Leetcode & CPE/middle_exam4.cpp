#include <iostream>
using namespace std;
int main()
{
    int a, b, prime_1 = 2, prime_3 = 3, flag = 0, temp;
    cin >> a >> b;
    if (a >= 0 && b >= a && b <= 1000)
    {
        for (int i = a; i < b; i++)
        {
            for (int j = 2; j < i - 1; j++)
            {
                if (i % j == 0)
                {
                    flag += 1;
                    break;
                }
            }
            if (flag != 1 && i != 1)
                cout << i << " ";

            flag = 0;
        }
    }
}