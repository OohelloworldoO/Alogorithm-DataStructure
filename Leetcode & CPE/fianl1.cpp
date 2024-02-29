#include <iostream>
using namespace std;
int greatest_common_divisor(int a, int b)
{
    int temp;
    if (b == 0)
        cout << a;
    while (a % b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return b;
}
int least(int a, int b) // lcm = ab/gcd(a,b)
{
    int temp = greatest_common_divisor(a, b), lcm;
    lcm = (a * b) / temp;
    return lcm;
}
int main()
{
    int a, b, gcd, lcm;
    cin >> a >> b;
    gcd = greatest_common_divisor(a, b);
    cout << gcd << endl;
    lcm = least(a, b);
    cout << lcm << endl;
}