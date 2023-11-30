#include <iostream>
using namespace std;
int main()
{
    int a, b, s1, s2 = 0;
    cin >> a >> b;
    for (int i = 1; i < b; i++)
    {
        s1 = i * i;
        if (s1 >= a && s1 <= b)
            s2 += s1;
    }
    cout << s2 << endl;
}