#include <iostream>
#include <cctype>  //isalpha(), tolower
#include <sstream> //stringstream
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
                s[i] = tolower((s[i]));
            else
                s[i] = ' ';
        }
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
            cout << tmp << "\n";
    }
}