#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int ii = 4; ii > i; ii--)
        {
            cout << " ";
        }
        cout << "*";
        for (int iii = 0; iii < i; iii++)
        {
            cout << "**";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int ii = -1; ii < i; ii++)
        {
            cout << " ";
        }
        cout << "*";
        for (int iii = 3; iii > i; iii--)
        {
            cout << "**";
        }
        cout << endl;
    }
}