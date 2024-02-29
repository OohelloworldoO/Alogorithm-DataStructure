#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 11; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i < 11; i++)
    {
        for (int j = 11; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i < 11; i++)
    {
        for (int j = 11; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
    }

    cout << endl;

    for (int i = 1; i < 11; i++)
    {
        for (int k = 10; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}