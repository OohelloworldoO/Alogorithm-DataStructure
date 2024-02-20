#include <stdio.h>
int  main(void)
{
    int a, b, c;
    printf("pls enter two numbers\nFirst is a, another is b:\n");
    scanf("%d %d", &a, &b);

    c = a+b;
    printf("a + b= %d\n", c);

    c = a*b;
    printf("a * b= %d\n", c);

    c = a-b;
    printf("a - b= %d\n", c);

    c = a/b;
    printf("a / b= %d\n", c);

    c = a%b;
    printf("a mod b= %d\n", c);

    return 0;
}
