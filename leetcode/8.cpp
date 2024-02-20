#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, N;
    cin >> n;
    while (n--)
    {
        cin >> N;
        bitset<16> N;
        cout << N << endl;
        N = N << 10;
        cout << N << endl;
    }
}