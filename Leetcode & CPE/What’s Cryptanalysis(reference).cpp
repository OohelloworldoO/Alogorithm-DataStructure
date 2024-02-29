#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, len = 0, count[100] = {0};
    cin >> n;
    cin.ignore(); // 不太清楚
    while (n--)
    {
        string line;
        getline(cin, line);
        for (int i = 0; i < line.length(); i++) // 執行每一行所有字數的次數
        {
            if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) // 如果在a~z || A~Z之間
            {
                len++;                     // 為字母總數
                count[toupper(line[i])]++; // 將字母變成ASCII的數字存進count matrix裡面 每進入一個就++
            }
        }
    }
    for (int j = len; j >= 1; j--) // 總字數執行次數，且由最高的開始減 相同時即可印出
    {
        for (char i = 'A'; i <= 'Z'; i++) // ASCII
        {
            if (count[i] == j) // 當總字數減到=count[j]裡面ASCII字母的數值時才印出
            {
                cout << i << " " << count[i] << endl;
            }
        }
    }
}