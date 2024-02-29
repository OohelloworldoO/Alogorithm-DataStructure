/*
    scanf() 可輸入不包含空格的字串 不讀取Enter
    getchar()只能讀取輸入緩存區的一個字符 包括Enter
*/
#include <stdio.h>

int main()
{
    char c;

    printf("Enter character: ");
    c = getchar();

    printf("Character entered: ");
    putchar(c); // 只能輸出一個字

    return (0);
}