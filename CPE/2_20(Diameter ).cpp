#include <stdio.h>
int main(void)
{
    int a, b, c, d, e, f;
    printf("--------------------------\n");
    printf("Enter the total time in seconds:\n");
    scanf("%d", &a);

    b = a/3600;
    c = (a%3600)/60;
    d = a-(b*3600)-(c*60);
    printf("%d seconds equals %d hours : %d minutes : %d seconds\n", a, b, c, d);
    printf("--------------------------\n");
}
