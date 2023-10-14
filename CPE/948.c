/*
Fibonaccimal base=用fib係數組成輸入的數字且由大->小 e.g 17 = 13+4 = 13+3+1 = 13+8+5+3+2+1
                                                                           1 0 0 1 0 1 用0、1代表有用到的
*/
#include <stdio.h>

int main()
{
    int matrix[1000][10];              // 將fib係數存到二維matrix
    int a = 0, b = 1, count = 0, temp; // fib係數從0開始
    while (count < 5000)               // 題目說每行有一個< 1e 的int
    {
        temp = a + b;
        count++;
    }
}