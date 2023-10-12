#include <stdio.h>

int main()
{
    int numbers;    // 測資數量
    int count;      // 火車共有幾節車廂
    int length[50]; // 將火車車廂當前的順序存到matrix
    scanf("%d", &numbers);

    while (numbers--) // 當while裡面為 0 -> false 會直接跳出迴圈
    {
        count = 0;
        scanf("%d", &numbers);
        for (int i = 0; i < numbers; i++) // 把車廂當前順序存到matrix
        {
            scanf("%d", &length[i]);
        }

        for (int i = 0; i < numbers; i++) // 執行numbers的次數 最多就是=numbers
        {
            for (int k = 0; k < numbers - i - 1; k++)
            {
                if (length[k] > length[k + 1]) // 判斷大小 並用tmp暫存matrix變數
                {
                    int tmp = length[k];
                    length[k] = length[k + 1];
                    length[k + 1] = tmp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);

        break;
    }
}
