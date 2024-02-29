#include <bits/stdc++.h>

using namespace std;

int num[26], n;
string s;

int main()
{
    scanf("%d", &n);
    getline(cin, s);

    while (n--)
    {
        getline(cin, s);

        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] <= 'z' && s[i] >= 'a')
                num[s[i] - 'a']++;
            else if (s[i] <= 'Z' && s[i] >= 'A')
                num[s[i] - 'A']++;
        }
    }

    while (true)
    {
        int mx = -1;
        for (int i = 0; i < 26; i++)
            mx = max(mx, num[i]);

        if (mx == 0)
            break;

        for (int i = 0; i < 26; i++)
        {
            if (num[i] == mx)
            {
                printf("%c %d\n", (char)'A' + i, num[i]);
                num[i] = -1;
            }
        }
    }

    return 0;
}