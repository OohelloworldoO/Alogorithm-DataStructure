#include <stdio.h>
int main()
{   int a, b, c,d ,e ,f, g;
    printf("Enter five-digit number:\n");
    scanf("%d", &a);

    while(a>99999 || a<10000)
    {
        if(a<=0)
        {
            printf("¿ù»~!\n");
            break;
        }
        else
        {
            printf("u should enter Five-digit number\n");
            printf("Enter five-digit number:\n");
            scanf("%d", &a);
        }

    }
    if(a<=0)
    {
        return 0;
    }
    else
    {
        b = a%10;
        c = (a%100)/10;
        d = (a%1000)/100;
        e = (a%10000)/1000;
        f = a/10000;
        printf("%d %d %d %d %d",f ,e ,d ,c ,b);
    }



    return 0;
}
