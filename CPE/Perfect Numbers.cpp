#include <iostream>
using namespace std;

int find_Prime_num(int k) // find prime num
{
    int flag = 1;
    for (int i = 2; i < k - 1; i++)
    {
        if (k % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
void isPerfect(int i) // number need to be an even number if and only if equal to x=2^n-1(2^n - 1)
{
    for (int i = 2, j = 2, k = 4; i < 14; i++, j *= 2, k *= 2)
    {
        int a, prime_Num;
        prime_Num = find_Prime_num(k - 1);
        // cout << "prime_Num= " << prime_Num << endl;
        if (prime_Num >= 1) // 如果k-1是prime number
        {
            a = j * (k - 1);
            // cout << "j=" << j << endl;
            // cout << "k=" << k << endl;
            cout << a << endl;
        }
    }
}
int main()
{
    int a;
    isPerfect(a);
}