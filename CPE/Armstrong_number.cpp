#include <iostream>
using namespace std;

int main()
{
    int a = 9, matrix[6][3];
    for (int t = 1; t < a; t++)
    {
        for (int h = 0; h < a; h++)
        {
            for (int o = 0; o < a; o++)
            {
                int aLl = t * 100 + h * 10 + o;
                if (aLl == (t * t * t + h * h * h + o * o * o))
                    cout << aLl << endl;
            }
        }
    }
}