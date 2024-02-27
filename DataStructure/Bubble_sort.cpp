// https://shengyu7697.github.io/std-sort/ 有詳細sort function語法
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
        for (int i = 0; i < a; i++)
            cout << b[i] << " ";
    }
}