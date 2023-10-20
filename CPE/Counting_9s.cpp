#include <iostream>
using namespace std;

int main()
{
    int d, a, b, c, ffff, e, count = 0;
    cout << "plz input an integer:" << endl;
    cin >> d;
    if (d % 10000 != 0)
    {
        a = d / 10000;
        b = d / 1000 - a * 10;
        c = d / 100 - ((d / 1000) * 10);
        ffff = d / 10 - (d / 100) * 10;
        e = d / 1 - (d / 10) * 10;
        cout << a;
        if (a = 9)
            count++;
        else if (b = 9)
            count++;
        else if (c = 9)
            count++;
        else if (ffff = 9)
            count++;
        else if (e = 9)
            count++;
        cout << count << endl;
    }

    else if (d > 99999)
        cout << "toooooo much!" << endl;
}