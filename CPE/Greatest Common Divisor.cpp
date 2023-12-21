#include <iostream>
using namespace std;
void recursive_gcd_func(int x, int y) // gcd(18,12)=gcd(12,6)=gcd(6,0)=6  gcd(x,y)
{
    int temp;
    while (y > 0)
    {
        temp = x % y;
        x = y;
        y = temp;
        // cout << x;
        // cout << y << endl;
        cout << "gcd(" << x << " , " << y << ")" << endl;

        if (y == 0)
            cout << x << " is the greatest number" << endl;
    }
}

int main()
{
    int x, y, xy;
    cin >> x >> y;
    recursive_gcd_func(x, y);
}