#include <iostream>
using namespace std;
int main()
{
    int n, k, Ans_result = 0, temp, temp2, temp3;
    cin >> n >> k;
    if (k >= 1 && n >= k && k <= 1000000)
    {
        Ans_result += n;
        temp = n / k;         // re exe
        temp2 = n % k;        // re exe
        temp3 = temp + temp2; // re exe
        Ans_result += temp;
        while (temp3 > k)
        {
            // temp += n / k;  // re exe
            // temp2 += n % k; // re exe
            // temp += temp2;  // re exe
            // Ans_result += temp;
            // temp = 0;
            temp = temp3 / k; // re exe
            temp3 = 0;
            temp2 = n % k;        // re exe
            temp3 = temp + temp2; // re exe
            Ans_result += temp;
        }
        cout << Ans_result << endl;
        // while (n % k >= n)
        // {
        //     temp += n / k;
        //     A_result += temp;
        //     cout << A_result << endl;
        // }
    }
}