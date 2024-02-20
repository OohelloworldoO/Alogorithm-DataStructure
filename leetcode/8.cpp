#include <bits/stdc++.h>
using namespace std;
string toBinary(int N)
{
    string r = 0;
    while (N != 0)
    {
        r += (N % 2 == 0 ? "0" : "1");
        N /= 2;
    }
    return r;
}

int main()
{
    int n, N;
    cin >> n;
    while (n--)
    {
        cin >> N;
        bitset<6> First(toBinary(N));
        cout << First;
    }
    return EXIT_SUCCESS;
}