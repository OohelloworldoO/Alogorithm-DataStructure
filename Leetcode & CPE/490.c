#include <stdio.h>
#include <string.h>

int main()
{ // [row][column]
    char str[101][101] = {0};
    int row = 0, max = 0; // row紀錄str矩陣位址 max紀錄字數

    while (gets(str[row])) // gets()存一段話到str matrix 只要gets()有get到東西 那就不會break這個while迴圈
    {
        // strlen取得輸入的字數並存到str 0的位址
        if (strlen(str[row]) > max)
        {
            max = strlen(str[row]); // max紀錄strlen的字數 簡言之str matrix是 [row][max]
        }
        row++; // 如果還有下一行 便能儲存 預留空間
    }

    for (int i = 0; i < max; i++) // i=max 並用for迴圈執行max裡存的次數(字數) 從第一個字(0開始)讀
    {
        for (int k = row - 1; k >= 0; k--) // k =row 先判斷在str matrix哪一row
        {
            if (i >= strlen(str[k])) //
            {
                printf(" ");
            }
            else
            {
                printf("%c", str[k][i]); //
            }
        }
    }
}