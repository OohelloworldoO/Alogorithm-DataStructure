#include <bits/stdc++.h>
using namespace std;
string toBinary(string N)
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
    while (N > 1)
    {
        r += N % 10;
        N /= 10;
    }
    return r;
}

int catch_num(string r)
{
    int N = 0;
    for (char nums : r)
    {
        if (nums == '1')
            N++;
        // cout << nums << " = " << N << endl;
    }
    return N;
}

int main()
{
    int n;
    string N;
    cin >> n;
    while (n--)
    {
        cin >> N;
        // bitset<16> First(toBinary(N));
        // cout << First << endl;
        cout << catch_num(toBinary(N)) << " " << catch_num(toHexadecimal(N)) << endl;
        cout << catch_num(toHexadecimal(N)) << endl;
        cout << toHexadecimal(N);
    }
}