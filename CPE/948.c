/*
Fibonaccimal base=用fib係數組成輸入的數字且由大->小 e.g 17 = 13+4 = 13+3+1 = 13+8+5+3+2+1
                                                                           1 0 0 1 0 1 用0、1代表有用到的
*/
#include <stdio.h>
int main()
{
    int a, totalNums, InputNums, Fib[40] = {};
    Fib[0] = 1, Fib[1] = 2;
    for (a = 2; a < 40; a++)
        Fib[a] = Fib[a - 1] + Fib[a - 2];

    scanf("%d", &totalNums);
    while (totalNums--)
    {
        scanf("%d", &InputNums);
        printf("%d = ", InputNums);
        int count = 0;

        for (a = 39; a >= 0; a--)
        {
            if (InputNums / Fib[a] == 1)
            {
                printf("1");
                InputNums %= Fib[a], count = 1;
            }
            else if (count)
                printf("0");
        }
        printf(" (fib)\n");
    }
    return 0;
}