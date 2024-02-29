#include <stdio.h>
int main()
{
    int a, b, c, d, L, count = 0, func_tion;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &L);
    while (a != 0 || b != 0 || c != 0 || d != 0 || L != 0)
    {
        for (int i = 0; i < L; ++i)
        {
            func_tion = a * i * i + b * i + c;
            count++;
        }
        printf("%d", count);
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &L);
    }
}