/*
想法記錄
題目意思是輸入兩個數字決定範圍
a~b每個數字都跑一次func
print出最高次數的cycle path

input 1、10
output 1 10 20(數字9的cycle path=20)

*/

#include <iostream>
using namespace std;

int main() // temp 紀錄上一個 temp2紀錄當前cycle path count
{
    int a, b, temp = 0, temp2 = 0, flag = 0, flag2;
    cin >> a >> b;
    if (1000000 > a > 0 && 1000000 > b > 0)
    {
        cout << a << " " << b << " ";
        if (a > b)
        {
            flag2 = a;
            a = b;
            b = flag2;
        }
        while (a < b) // a~b
        {
            flag = a;
            while (flag > 1)
            {

                if (flag % 2 != 0)
                    flag = 3 * flag + 1;
                else
                    flag = flag / 2;

                temp2 += 1;
            }

            if (temp2 < temp)
                temp2 = temp;
            temp = temp2;
            temp2 = 0;
            a += 1;
        }
        cout << temp + 1 << " ";
    }
}
