/*
河內塔的recurrence sequence: An = 2^n-1
*/

#include <iostream>
using namespace std;
// void Tower_of_Hanoi(int s)
// {
//     // 次數計算
//     int b = 1;
//     for (int i = 0; i < s; i++)
//     {
//         b = b * 2;
//         cout << "b= " << b << endl;
//     }
//     b -= 1;
// }

void Tower_of_Hanoi(int n, int a, int b, int c)
{
    int move = 0;
    if (n == 1)
    {
        cout << a << " -> " << c << endl;
        move++;
    }
    else
    {
        Tower_of_Hanoi(n - 1, 1, 3, 2); // 放到輔助區
        Tower_of_Hanoi(1, 1, 2, 3);     // 放最大的到目的地
        Tower_of_Hanoi(n - 1, 2, 1, 3); // 移動剩下的到目的地
    }
}

int main()
{
    int a;
    cin >> a;
    Tower_of_Hanoi(a, 1, 2, 3);
}