#include <stdio.h>
#include <string.h>

int main()
{
    char str[101][101] = {0}; //
    int row = 0, max = 0;

    while (gets(str[row])) // gets()存一段話到str matrix 只要gets()有get到東西 那就不會break這個while迴圈
    {
        // strlen取得輸入的字數並存到str 0的位址
        if (strlen(str[row]) > max)
        {
            max = strlen(str[row]); // max紀錄strlen的字數 以此類推
        }
        row++;
    }

    for (int i = 0; i < max; i++)
    {
        for (int k = row - 1; k >= 0; k--)
        {
            if (i >= strlen(str[k]))
            {
                printf(" ");
            }
            else
            {
                printf("%c", str[k][i]);
            }
        }
    }
}