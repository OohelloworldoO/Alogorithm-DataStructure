#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int matrix[10];
    for (int i = 0; i < 10; i++)
        cin >> matrix[i];
    sort(matrix, matrix + 10);

    for (int i = 0; i < 10; i++)
        cout << matrix[i] << " ";
    cout << endl;

    sort(matrix, matrix + 10, greater<int>());
    for (int i = 0; i < 10; i++)
        cout << matrix[i] << " ";
}