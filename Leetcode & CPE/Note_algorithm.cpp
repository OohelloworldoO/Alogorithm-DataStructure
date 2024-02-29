/*
algorithm 提供了大量基於迭代器的非成員模板函數
max(x,y)=>返回兩個元素中最大的元素
min(x,y)=>返回兩個元素中最小的元素
swap(x,y)=>交換
reverse(a,b)=>將a、b間的元素or容器 在迭代器a~b的範圍內反轉
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(a, a + 6);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    string str = "abcdefgh";
    reverse(str.begin() + 2, str.begin() + 6);
    for (int j = 0; j < str.length(); j++)
    {
        cout << str[j] << " ";
    }
    cout << endl;
    return 0;
}

/*執行結果:
6 5 4 3 2 1 7 8 9 10
a b c d e c g h
*/

/*
next_permutation()
lower_bound(first, last, value)=>return 範圍內>=value最小值的元素位置
upper_bound(first, last, value)=>return 範圍內第一個>value最小值的元素位置
只能用於已經排序的資料進行binary search
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3};
    do
    {
        cout << a[0] << " " << a[1] << a[2] << endl;
    } while (next_permutation(a, a + 3));
    return 0;
}
/*執行結果:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[10] = {1, 2, 2, 3, 3, 4, 4, 5, 6, 7};
    int *lowerPos = lower_bound(a, a + 10, 3);
    int *upperPos = upper_bound(a, a + 10, 3);
    cout << "lower_bound(a,a+10,3)= " << lowerPos - a << endl;
    cout << "upper_bound(a,a+10,3)=" << upperPos - a << endl;
    return 0;
}
/*執行結果
lower_bound(a,a+10,3)=3
upper_bound(a,a+10,3)=5
*/