#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int len;

    strcpy(str, "U mother fkr");

    len = strlen(str);
    printf("|%s| have |%d| charactors in it\n", str, len); // 包含空格

    return (0);
}
// strlen就是取得字數(含空格)