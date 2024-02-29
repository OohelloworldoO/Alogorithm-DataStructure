#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter your height(m), weight(kg)\n");
    scanf("%f %f", &a, &b);
    c = b/(a*a);
    printf("your BMI is %.2f\n", c);

    if(c<18.5) printf("過輕");
    if(24.9>c || c>18.5) printf("你很正常");
    if(25>c>29.9) printf("過重");
    if(c>=30) printf("你超肥");
}
