#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, m, a, b, carry, count;

    scanf("%d%d", &n, &m);
    while (n != 0 || m != 0)
    {
        carry = 0;
        count = 0;
        while (n || m)
        {
            if (n % 10 + m % 10 + carry >= 10)
            {
                ++count;
                carry = 1;
            }
            else
                carry = 0;
            n /= 10;
            m /= 10;
        }

        if (count <= 1)
            if (count == 0)
                cout << "No carry operation.\n";
            else
                cout << "1 carry operation.\n";
        else
            cout << count << " carry operations.\n";

        scanf("%d%d", &n, &m);
    }

    return 0;
}