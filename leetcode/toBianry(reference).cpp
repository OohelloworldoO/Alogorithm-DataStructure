#include <bitset>
#include <iostream>

using std::bitset;
using std::cout;
using std::endl;
using std::string;

string toBinary(int n)
{
    string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1"); // 如果n%2==0 true return "0" false return "1"
        n /= 2;
    }
    return r;
}

int main()
{
    int number = 15;

    bitset<32> bs1(toBinary(number));
    cout << "binary:  " << bs1 << endl;
    bitset<32> bs2(number);
    cout << "binary:  " << bs2 << endl;

    return EXIT_SUCCESS;
}