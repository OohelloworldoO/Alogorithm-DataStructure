#include <iostream>
using namespace std;
int main()
{
    int a, b, flag = false;
    cout << "2" << endl;
    for (int a = 2; a < 100; a++)
    {
        for (int b = 2; b < a; b++)
        {
            if (a % b == 0) // 只要有一個因數就break
            {
                flag = false;
                break;
            }

            else if (a % b != 0)
            {
                flag = true;
            }
        }
        if (flag)
            cout << a << endl;
    }
}