#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "plz enter three digits" << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << "these could be a sides of triangle";
    else
        cout << "these could'n bee a sides of triangle";
}