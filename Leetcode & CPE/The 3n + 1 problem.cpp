/*
00100 - The 3n + 1 problem

思路:
two numbers determine the range of func
print the highest cycle path counts

input 1、10
output 1 10 20(9's cycle path=20)

*/

#include <iostream>
using namespace std;

int main() // temp2 record current cycle path counts
{
    int a, b, temp = 0, temp2 = 0, flag = 0, flag2 = 0;
    while (cin >> a >> b)
    {
        flag2 = a;
        if (1000000 > a > 0 && 1000000 > b > 0)
        {
            cout << a << " " << b << " ";
            if (a > b) // a b exchange
            {
                flag2 = b;
                b = a;
                a = flag2;
            }

            while (flag2 < b) // a~b
            {
                flag = flag2;
                while (flag > 1)
                {

                    if (flag % 2 != 0)
                        flag = 3 * flag + 1;
                    else
                        flag = flag / 2;

                    temp2 += 1;
                }

                if (temp2 < temp)
                    temp2 = temp;
                temp = temp2;
                temp2 = 0;
                flag2 += 1;
            }

            if (a == b)
            {
                flag = a;
                while (flag > 1)
                {

                    if (flag % 2 != 0)
                        flag = 3 * flag + 1;
                    else
                        flag = flag / 2;
                    temp2 += 1;
                }
                temp = temp2;
                temp2 = 0;
            }
            cout << temp + 1 << " " << endl;
            temp = 0;
        }
    }
}
