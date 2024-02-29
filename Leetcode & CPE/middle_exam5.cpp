#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a;
    cin >> a;
    bitset<8> changeto_Binary(a);
    cout << changeto_Binary << endl;
}