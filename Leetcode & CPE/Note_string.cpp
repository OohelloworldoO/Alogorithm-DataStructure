/*
string str1;                 // 內容為空字串
string str2("caterpillar");  // 內容為指定的字串常量
string str3(str2);           // 以 str1 實例建立字串
string str4 = "Justin";      // 內容為指定的字串常量
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2 = "caterpillar";
    string str3(str2);

    cout << "str1 是否為空：" << str1.empty() << endl;
    cout << "str1 長度: " << str1.size() << endl;
    cout << "str2 長度: " << str2.size() << endl;
    cout << "str3 長度: " << str3.size() << endl;

    cout << "str1 與 str2 內容是否相同：" << (str1 == str2) << endl;
    cout << "str2 與 str3 內容是否相同：" << (str3 == str3) << endl;

    return 0;
}

/*執行結果:
str1 是否為空：1
str1 長度: 0
str2 長度: 11
str3 長度: 11
str1 與 str2 內容是否相同：0
str2 與 str3 內容是否相同：1
*/