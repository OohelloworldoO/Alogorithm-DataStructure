#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter three different integers:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("--------------------------\n");
    printf("Sum is %d\n", a + b + c);
    printf("Average is %d\n", (a + b + c)/3 );
    printf("Product is %d\n", a * b * c);




    if(b>c && c>a)
    {
        printf("Smallest is %d\nLargest is %d\n", a,b);
    }
    if(c>b && b>a)
    {
        printf("Smallest is %d\nLargest is %d\n", a,c);
    }


    if(a>c && c>b)
    {
        printf("Smallest is %d\nLargest is %d\n", b,a);
    }
    if(c>a && a>b)
    {
        printf("Smallest is %d\nLargest is %d\n", b,c);
    }


    if(a>b && a>c)
    {
        printf("Smallest is %d\nLargest is %d\n", c,a);
    }
    if(b>a && a>c)
    {
        printf("Smallest is %d\nLargest is %d\n", c,b);
    }






    printf("--------------------------\n");







    return 0;


}
