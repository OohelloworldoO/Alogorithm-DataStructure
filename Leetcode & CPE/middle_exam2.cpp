#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin >> a >> b >> c;
    if (a >= 0 && a <= 10 && b >= 0 && b <= 10)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << c;
            }
            cout << endl;
        }
    }
}