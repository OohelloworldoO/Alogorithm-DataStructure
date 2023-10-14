
#include <stdio.h>
int main()
{
    // 存fib係數到matrix
    int F[39] = {};
    int a, n, t;
    F[0] = 1, F[1] = 2;
    for (a = 2; a < 39; a++) // 用a來記錄matrix的位址 0、1各存放了0、1
        F[a] = F[a - 1] + F[a - 2];

    scanf("%d", &t); // t是第一次輸入=總共有多少input
    while (t--)
    {
        scanf("%d", &n);
        printf("%d = ", n);
        int flag = 0;

        // 17/13 =1...4 將mod繼續/F[]
        for (a = 38; a >= 0; a--)
        {
            if (n / F[a] == 1)
            {
                printf("1");
                n %= F[a], flag = 1;
            }
            else if (flag)
                printf("0");
        }
        printf(" (fib)\n");
    }
    return 0;
}