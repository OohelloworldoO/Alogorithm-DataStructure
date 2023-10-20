#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    double aa = 2;
    aa = sqrt(aa);

    cout << "enter three digits" << endl;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && a != c)
            cout << "isosceles triangle" << endl;
        else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            cout << "rectangular triangle" << endl;

        else if (a > b > c && a * a > b * b && a * a > c * c)
            cout << "obtuse triangle" << endl;
        else if (a > c > b && a * a > b * b && a * a > c * c)
            cout << "obtuse triangle" << endl;

        else if (b > a > c && b * b > a * a && b * b > c * c)
            cout << "obtuse triangle" << endl;
        else if (b > c > a && b * b > c * c && b * b > a * a)
            cout << "obtuse triangle" << endl;

        else if (c > a > b && c * c > a * a && c * c > b * b)
            cout << "obtuse triangle" << endl;
        else if (c > b > a && c * c > a * a && c * c > b * b)
            cout << "obtuse triangle" << endl;
        else if (a == b == c)
            cout << "regular triangle" << endl;

        else if (a > b && a > c && a * a < c * c & a * a < b * b)
            cout << " acute triangle" << endl;
        else if (b > a && b > c && b * b < c * c & b * b < a * a)
            cout << " acute triangle" << endl;
        else if (c > b && c > a && c * c < a * a & c * c < b * b)
            cout << " acute triangle" << endl;

        else if (a == b || a * aa == c || b * aa == c)
            cout << "isosceles righttriangle" << endl;
    }
    else
        cout << "these could'n bee a sides of triangle";
}