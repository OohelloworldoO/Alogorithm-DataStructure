#include <stdio.h>

int main()
{
    char str[50];

    printf("pls enter a sentence:\n");
    gets(str);

    printf("ur input's:  \n%s", str);

    return (0);
}