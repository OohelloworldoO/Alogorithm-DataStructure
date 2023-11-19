#include <iostream>
#include <cstdlib> //rand()
#include <ctime>   //time()
#include <string>
using namespace std;
int main()
{
    int a, b;
    string c;
    srand(time(NULL));
    b = rand() % 101;
    cout << "enter a num" << endl;
    cin >> a;
    if (a > b)
        cout << "ur input is higher then the answer" << endl;
    else if (a < b)
        cout << "ur input is lower then the answer" << endl;
    else if (a > 100)
        cout << "WARN! the input of number need follow the rules 0~100" << endl;
    else if (a < 0)
        cout << "WARN! the input of number need follow the rules 0~100" << endl;
    else
        cout << "correct" << endl;
    cout << "if u want to play again then press y" << endl;
    cin >> c;

    while (c == "y" || c == "Y" || c == "yes" || c == "Yes" || c == "YES")
    {
        srand(time(NULL));
        b = rand() % 101;
        cout << "enter a num" << endl;
        cin >> a;

        while (a != b)
        {

            if (a > b)
                cout << "ur input is higher then the answer" << endl;
            else if (a < b)
                cout << "ur input is lower then the answer" << endl;
            else if (a > 100)
                cout << "WARN! the input of number need follow the rules 0~100" << endl;
            else if (a < 0)
                cout << "WARN! the input of number need follow the rules 0~100" << endl;

            cout << "try again. enter a num" << endl;
            cin >> a;
        }
        cout << "correct" << endl
             << "if u want to play again then press y" << endl;
        cin >> c;
    }
}