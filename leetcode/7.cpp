#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count[100] = {0}, len = 0;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string line;
        getline(cin, line);
        for (int i = 0; i < line.length(); i++)
        {
            if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            {
                len++;
                count[toupper(line[i])]++;
            }
        }
    }
    for (int i = len; i >= 1; i--)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            if (count[j] == i)
            {
                cout << j << " " << count[j] << endl;
            }
        }
    }
}