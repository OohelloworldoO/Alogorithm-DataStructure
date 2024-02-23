#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int v[500], int a) // 只是想自己寫一個而已 c++可以直接用sort(i,i+1)
{
    int temp;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < a; j++)
            if (v[i] < v[j])
            {
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
}

void getMedian_count(int v[500], int a)
{
    int x = a / 2;
    int total = 0;
    for (int i = 0; i < a; i++)
        total += abs(v[x] - v[i]);
    cout << total << endl;
}

int main()
{
    int n, a, b[500] = {0};
    cin >> n;
    while (n--)
    {
        cin >> a;
        for (int i = 0; i < a; i++)
            cin >> b[i];
        bubble_sort(b, a);
        // sort(b, b + a, greater<int>()); //大->小; less<type>: 小->大
        getMedian_count(b, a);
    }
}