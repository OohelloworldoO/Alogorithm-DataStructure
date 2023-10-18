#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, half, symmetric;
    vector<vector<long long>> a(101, vector<long long>(101));
    scanf("%d", &t);

    for (int k = 1; k <= t; ++k)
    {
        symmetric = 1;
        scanf("\nN = %d", &n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                scanf("%lld", &a[i][j]);
                if (a[i][j] < 0)
                    symmetric = 0;
            }
        }

        half = n / 2 + 1;
        for (int i = 0; i < half; ++i)
        {
            if (symmetric == 0)
                break;

            for (int j = 0; j < n; ++j)
            {
                if (a[i][j] != a[n - i - 1][n - j - 1])
                {
                    symmetric = 0;
                    break;
                }
            }
        }

        if (symmetric == 1)
            printf("Test #%d: Symmetric.\n", k);
        else
            printf("Test #%d: Non-symmetric.\n", k);
    }

    return 0;
}