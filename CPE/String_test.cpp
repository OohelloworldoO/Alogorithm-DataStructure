#include <iostream>
#include <string>
using namespace std;
int main()
{
    string inputString;
    cin >> inputString;

    for (char letter : inputString)
    {
        if (letter == 'f')
            cout << "shit";
    }

    return 0;
}