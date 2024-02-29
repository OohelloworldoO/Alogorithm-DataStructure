#include <iostream>
using namespace std;
int main()
{
    int total, train, matrix[50], counter = 0, temp; // total=測資幾個, train=車廂數, matrix儲存車廂順序, counter計算次數, temp暫存用
    cin >> total;
    while (total)
    {
        cin >> train;
        for (int i = 0; i < train; i++) // 車廂順序input
        {
            cin >> matrix[i];
        }
        while (train--)
        {
            for (int i = 0; i < train; i++)
            {
                if (matrix[i] > matrix[i + 1]) // exchange
                {
                    temp = matrix[i];
                    matrix[i] = matrix[i + 1];
                    matrix[i] = temp;
                    counter += 1;
                }
            }
        }

        cout << "Optimal train swapping takes " << counter << " swaps." << endl;
        counter = 0;
        total -= 1;
    }
}