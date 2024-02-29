#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dynArr; // 管理動態記憶體的指標

    int arrLen = 10; // 空間大小

    dynArr = malloc(arrLen * sizeof(int)); // 取得記憶體空間

    if (dynArr == NULL)
    {
        // 格式化信息輸出到指定的文件流中
        fprintf(stderr, "Error: unable to allocate required memory\n"); // 無法取得空間
        return 1;
    }

    // 使用動態取得的記憶體空間
    int i;
    for (i = 0; i < arrLen; ++i)
    {
        dynArr[i] = i;
        printf("%d", dynArr[i]);
    }

    free(dynArr);
    return 0;
}