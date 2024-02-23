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

string toHexadecimal(int N) // 把int轉成string, bit轉換成20位數的16進位 type再轉成stringreturn
{
    string Binary = to_string(N);
    bitset<20> bit(stoi(Binary, nullptr, 16));
    string bIt = bit.to_string();
    return bIt;
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
    int n, N;
    cin >> n;
    while (n--)
    {
        cin >> N;
        // bitset<16> First(toBinary(N));
        // cout << First << endl;
        cout << catch_num(toBinary(N)) << " " << catch_num(toHexadecimal(N)) << endl;
    }
}