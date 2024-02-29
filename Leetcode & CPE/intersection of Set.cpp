#include <iostream>
#include <Algorithm>
using namespace std;
void mama(int a[10], int b[10])
{

    for (int i = 0; i < 10; i++)
    {

        int flag = 0, flag2 = 0;

        for (int j = 0; j < 10; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                flag2 += 1;
                break;
            }
            if (flag2 = 0)
            {
                if (a[i] != b[j])
                    flag += 1;
            }
        }

        if (flag > 0)
            cout << a[i] << " ";
    }
}
int main()
{
    int a[10], b[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> b[i];
    }
    mama(a, b);
}