#include <iostream>
using namespace std;
int isPrime(int x)
{
    int flag = 0, temp = 0;
    for (int i = 2; i < x - 1; i++)
    {
        if (x % i == 0)
            break;
        else if (x % i != 0)
            flag += 1;
    }
    if (flag >= 1)
        temp = x;
    return temp;
}

int main()
{
    int x;
    cin >> x;
    if (isPrime(x) > 0)
        cout << isPrime(x) << " is a prime number";
    else if (isPrime(x) == 0)
        cout << x << " isn't a prime number";
}