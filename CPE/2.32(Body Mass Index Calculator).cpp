#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter your height(m), weight(kg)\n");
    scanf("%f %f", &a, &b);
    c = b/(a*a);
    printf("your BMI is %.2f\n", c);

    if(c<18.5) printf("�L��");
    if(24.9>c || c>18.5) printf("�A�ܥ��`");
    if(25>c>29.9) printf("�L��");
    if(c>=30) printf("�A�W��");
}
