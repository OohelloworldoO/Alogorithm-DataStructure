#include <iostream>
using namespace std;
int main()
{
    int a[6];
    float al = 0;
    for (int i = 0; i < 6; i++)
        cin >> a[i];
    for (int i = 0; i < 6; i++)
        al += a[i];
    al /= 6;
    printf("%.6f", al);
}