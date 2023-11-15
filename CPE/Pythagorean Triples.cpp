#include <iostream>
using namespace std;
int main()
{
    cout << "a b c" << endl;
    int a, b, c;
    for (c = 0; c < 22; c++)
    {
        for (a = 0; a < c; a++)
        {
            for (b = 0; b < c; b++)
            {
                if (a * a + b * b == c * c)
                    cout << a << " " << b << " " << c << endl;
            }
        }
    }
}