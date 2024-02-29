#include <iostream>
using namespace std;

int main()
{
    int in_Put, a = 1, matrix[30][3000];
    cout << "This is the part of Floyd's Triangle. U can check the answer by ur input" << endl;
    cout << " -- -- -- -- -- -- -- --" << endl;
    // save value into matrix
    for (int i = 0; i < 30; i++) // column of matrix
    {
        for (int j = 0; j <= i; j++) // row of matrix
        {
            matrix[i][j] = a;
            a++;
        }
    }

    // printf the part of matrix
    for (int i = 0; i < 6; i++) // column of matrix
    {
        for (int j = 0; j <= i; j++) // row of matrix
        {
            a++;
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    cout << " -- -- -- -- -- -- -- --" << endl;
    cout << "The max row of matrix is 30" << endl;
    cout << "Plz input the number of row u want to check" << endl;
    cin >> in_Put;
    for (int j = 0; j <= in_Put - 1; j++)
    {
        cout << matrix[in_Put - 1][j] << " ";
    }
}