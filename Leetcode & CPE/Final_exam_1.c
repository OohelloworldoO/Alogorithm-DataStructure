#include <stdio.h>
#include <stdlib.h>

// 找出數組中的最大值
int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// 使用計數排序根據exp對arr進行排序
void countSort(int arr[], int n, int exp)
{
    int output[n]; // 輸出數組
    int i, count[10] = {0};

    // 計數數字出現的次數
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // 改變 count[i] 以便包含實際位置
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // 構建輸出數組
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // 將輸出數組複製到arr，使arr包含按當前數位排序的數字
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// 基數排序
void radixSort(int arr[], int n)
{
    // 找到數組中的最大數字來確定數字的位數
    int m = getMax(arr, n);

    // 根據每個位數使用計數排序
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

int main()
{
    int arr[] = {481, 526, 581, 960, 309, 748, 467, 322, 972};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("before: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // 進行基數排序
    radixSort(arr, n);

    printf("after: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
