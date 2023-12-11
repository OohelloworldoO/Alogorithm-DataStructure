#include <iostream>
using namespace std;
void Sum(int s)
{
    int matrix[30], i = 0, flag = 0, result_sum = 0, s2 = 0;
    while (s > 1)
    {
        s2 = s;
        s2 %= 10;
        s /= 10;
        matrix[i] = s2;
        i++;
        flag++;
        // cout << "flag= " << flag << endl;
    }

    for (int i = 0; i < flag; i++)
    {
        result_sum += matrix[i];
        // cout << "result_sum= " << result_sum << endl;
    }
    cout << result_sum << endl;
}
int main()
{
    int a;
    cin >> a;
    Sum(a);
}
