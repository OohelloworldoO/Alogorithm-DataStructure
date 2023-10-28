#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    cout << rand() % 5 << endl;                   // 0~4
    cout << rand() % 5 + 1 << endl;               // 1~5
    cout << rand() % (100 - 60 + 1) << endl;      // 0~40
    cout << rand() % (100 - 60 + 1) + 60 << endl; // 60~100
}
