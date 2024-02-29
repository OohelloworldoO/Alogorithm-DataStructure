#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 || b > 0 || c > 0)
    {
        if (c == a + b)
            cout << "+" << endl;
        if (c == a - b)
            cout << "-" << endl;
        if (c == a * b)
            cout << "*" << endl;
        if (c == a % b)
            cout << "%" << endl;
        else if (c != a + b && c != a - b && c != a * b & c != a % b)
            cout << "wrong" << endl;
    }
}