#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi, terme;
    for (int i = 1; i < 4; i += 2)
    {
        terme = 4 / i - 4 / (i + 2) + 4 / (i + 2);
        pi = terme;
    }
    cout << setprecision(30) << pi << endl;
}
