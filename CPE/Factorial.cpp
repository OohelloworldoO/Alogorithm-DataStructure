#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, count = 1, cc, count2 = 1;
    float bb = 0;
    cout << "enter the number of factorial" << endl;
    cin >> n;
    for (int i = n; i > 0; i--, n--)
    {
        count *= n;
    }
    cout << "a. " << count << endl;
    while (n--)
    {
        for (int i = n; i > 0; i--, n--)
        {
            count2 *= n;
        }
        bb += 1 / count2;
        count2 = 1;
    }
    bb += 1;

    cout << "b. " << ceil(bb) << endl;
    cout << "c. " << count2 << endl;
}