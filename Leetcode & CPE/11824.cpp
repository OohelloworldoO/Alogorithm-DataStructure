#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, a[50];
    scanf("%d", &t);
    while (t--)
    {
        int n = 0;
        while (scanf("%d", &a[n]) == 1 && a[n])
            n++;
        sort(a, a + n);
        int i, j, k;
        long long sum = 0, flag = 0, tmp;
        for (i = n - 1, j = 1; i >= 0; i--, j++)
        {
            tmp = 1;
            for (k = 1; k <= j; k++)
            {
                tmp *= a[i];
                if (sum + 2 * tmp > 5000000)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
            sum += 2 * tmp;
        }
        if (flag)
            puts("Too expensive");
        else
            printf("%lld\n", sum);
    }
    return 0;
}