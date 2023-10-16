#include <stdio.h>
#include <stdlib.h>
main()
{
    int in_put, count = 0, indx, matrix[26], max_count = 0;
    char temp;
    scanf("%d", &in_put);  // 讀取將會輸入幾行
    while (count < in_put) // 執行幾行
    {
        temp = getchar();
        if (temp = '\n') // 如果讀到換行
            count++;
        else if (temp <= 'z' && temp >= 'a') // 取得順序
            indx = temp - 'a';
        else if (temp <= 'Z' && temp >= 'A')
            indx = temp - 'A';
        else
            continue;

        matrix[indx] += 1;
        if (matrix[indx] > max_count)
            max_count = matrix[indx];
    }

    for (indx = max_count; max_count > 0; max_count--)
    {
        // for()
    }
}