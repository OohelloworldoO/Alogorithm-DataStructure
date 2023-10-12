#include <stdio.h>

int al(int a, int count)
{
    count++;

    if (a % 2 == 0)
    {
        return al(a / 2, count);
    }
    else if (a % 2 == 1 && a > 1)
    {
        return al(3 * a + 1, count);
    }

    return count;
}

int main()
{
    int i, j, a, b;

    while ((scanf("%d %d", &i, &j)) != EOF)
    {
        int max = 0;
        a = i;
        b = j;

        if (j < i)
        {
            a = j;
            b = i;
        }

        for (int k = a; k <= b; k++)
        {

            if (al(k, 0) > max)
            {
                max = al(k, 0);
            }
        }
        printf("%d %d %d\n", i, j, max);
    }
}