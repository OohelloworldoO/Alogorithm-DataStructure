#include <iostream>
using namespace std;

int main()
{
    scanf("%*d"); // first line of input contains a single integer means the number of test cases to follow
    char w[2][105];
    int k, n, i, j, l;
    while (scanf("%d %d", &k, &n) == 2) // detect whether the input is 2
    {
        scanf("%s", w[0]);
        // matrix save words from 0 to ans but first situation has exist
        int ans = n * k, flag = 1; // assume all word are different=> printf n*k
        for (i = 1; i < n; i++)    // run n (words) times
        {
            //%c=>&a 只能輸入一個word    %s=>不用& 因名稱就有指標的概念 存不超過20字的到matrix裡面
            scanf("%s", w[flag]);   // w[0]已經存了第一個input w[1]存第二個
            for (j = 0; j < k; j++) // each word run k char times to saved in matrix
            {
                for (l = 0; w[!flag][j + l]; l++) // flag inverse=0
                    if (w[flag][l] != w[!flag][j + l])
                        break;

                if (w[!flag][j + l] == '\0') // '\0'是string的結束符
                {
                    ans -= k - j;
                    break;
                }
            }
            flag = !flag; // logical inverse
        }
        printf("%d\n", ans);
    }
    return 0;
}