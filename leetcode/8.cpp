#include <bits/stdc++.h>
using namespace std;
string toBinary(int N)
{
    string r;
    while (N != 0)
    {
        r += (N % 2 == 0 ? "0" : "1");
        N /= 2;
    }
    return r;
}

string toHexadecimal(int N)
{
    string r;
    return r;
}

int catch_num(string r)
{
    int N = 0;
    for (char nums : r)
    {
        if (nums == 1)
            N++;
    }
    return N;
}

int main()
{
    int n, N;
    cin >> n;
    while (n--)
    {
        cin >> N;
        bitset<16> First(toBinary(N));
        cout << First;
        cout << catch_num(toBinary(N));
    }
}