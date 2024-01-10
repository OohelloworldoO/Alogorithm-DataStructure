#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// void reverse(string a)
// {
//     reverse(a.begin(), a.end());
//     cout << a;
// }
void reverse(char a[300])
{
    strrev(a);
    cout << a << " ";
}

void upper(char a[300])
{
    for (int i = 0; i < 10; i++)
        putchar(toupper(a[i]));

    cout << endl;
}
void lower(char a[300])
{
    for (int i = 0; i < 10; i++)
        putchar(tolower(a[i]));
}

int main()
{
    char a[300];
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    reverse(a);
    upper(a);
    lower(a);
}