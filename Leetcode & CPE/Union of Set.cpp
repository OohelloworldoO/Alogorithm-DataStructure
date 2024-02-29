#include <iostream>
#include <Algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[10], b[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> b[i];
    }
    vector<int> v(20);
    vector<int>::iterator it;
    sort(a, a + 10);
    sort(b, b + 10);
    it = set_union(a, a + 10, b, b + 10, v.begin());
    v.resize(it - v.begin());
    for (it = v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}