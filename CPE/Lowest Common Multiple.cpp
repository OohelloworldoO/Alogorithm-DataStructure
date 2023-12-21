#include <iostream>
using namespace std;
int recursive_gcd_func(int x, int y) // gcd(18,12)=gcd(12,6)=gcd(6,0)=6  gcd(x,y)
{
    int temp, gcd;
    while (y > 0)
    {
        temp = x % y;
        x = y;
        y = temp;
        // cout << x;
        // cout << y << endl;
        // cout << "gcd(" << x << " , " << y << ")" << endl;
        if (y == 0)
        {
            // cout << x << " is the greatest number" << endl;
            gcd = x;
        }
    }
    return gcd;
}

void Lowest_Common_Multiple(int x, int y)
{
    int gcd = 0, lcm = 0;
    // cout << recursive_gcd_func(x, y) << endl;
    gcd = recursive_gcd_func(x, y);
    // a += gcd;
    // cout << a << endl;
    lcm = (x * y) / gcd;
    cout << "LCM = " << lcm;
}

int main()
{
    int x, y, gcd;
    cin >> x >> y;
    Lowest_Common_Multiple(x, y);
}