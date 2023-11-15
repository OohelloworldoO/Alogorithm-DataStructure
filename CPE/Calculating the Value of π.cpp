/*
calculate of pi(Leibniz series)
4- 4/3 + 4/5 - 4/7 + 4/9...
分數相隔1會變號
*/

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double pi=4;
    int term,piyan,g8=0;
    for(int i=0;i<10000;i++)
    {
        piyan=term*2+3;
        if(term%2==00)pi-=4.0/piyan;
        else pi+=4.0/piyan;

        if(g8<1 && trunc(100*pi)==314)
        {
            cout<<"found 3.14 at iteration"<<i<<endl;
            g8++;
        }
                if(g8<2 && trunc(100*pi)==314)
        {
            cout<<"found 3.14 at iteration"<<i<<endl;
            
        }
    }
}
