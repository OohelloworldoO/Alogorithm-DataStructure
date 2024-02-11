#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[999] = {0};
    bool flag = true; // 偵測基數與偶數的引號
    while (gets(str))
    {
        for (int i = 0; i < sizeof(str); i++)
        {
            if (flag && str[i] == '"')
            {
                cout << "``";
                flag = false;
            }
            else if (!flag && str[i] == '"')
            {
                cout << "''";
                flag = true;
            }
            else
                cout << str[i];
        }
    }
    cout << endl;
}