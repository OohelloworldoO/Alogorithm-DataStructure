#include <stdio.h>

int aa(int a, int count)
{
    count++;

    if (a % 2 == 0)
        return aa(a / 2, count);
    else if (a % 2 == 1 && a > 1)
        return aa(3 * a + 1, count);
    return count;
}

int main()
{
    int i, j, a, b;

    while ((scanf("%d %d", &i, &j)) != EOF)
}