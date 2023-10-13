#include <stdio.h>

int main()
{
    char str[50];

    printf("pls enter a sentence:\n");
    gets(str); // 將輸入存到str matrix

    printf("ur input's:  \n%s", str);

    return (0);
}
// gets() 就是存一段話(含空格)