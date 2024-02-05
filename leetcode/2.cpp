/*
Mutant Flatworld Expolrers

the first row of input represent the world spatial extent
the second one is the initial location of the bot and bot's command

方位:
       1
    4     2
       3
*/

/*

1.解決while迴圈無法轉向問題(done)
2.在2*2 matrix裡面紀錄LOST位置 waring用
3.結果只需要顯示一次 且要顯示最後方位
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int rangeA, rangeB, initial_location_x, initial_location_y, LOST = 0; // spatial extent(x, y)、initial location(x, y)、如果LOST=1 代表當前輸入有包含出界input 自動忽略
    int Last_LostA[30], Last_LostB[30];                                   // 遺失前位置 用matrxi紀錄?
    int direction = 0, flag = 0;                                          // 初始方向 方位判斷、阻斷用
    string inPut_command1, inPut_command;
    char poSition;
    cin >> rangeA >> rangeB;
    while (cin >> initial_location_x >> initial_location_y >> inPut_command1 >> inPut_command)
    {
        int i = 0;                          // for 2*2 matrix from 0 to 30
        for (char letter1 : inPut_command1) // 檢測第一個方位
        {
            if (letter1 == 'N')
            {
                direction = 1;
                // cout << direction << endl;
            }
            if (letter1 == 'W')
                direction = 2;
            if (letter1 == 'S')
                direction = 3;
            if (letter1 == 'E')
                direction = 4;
        }
        for (char letter : inPut_command) // 建議在 string 變數而不是 char 變數中進行輸入以避免此錯誤, string => " " char => ' '
        {
            // if (poSition == 'N' || poSition == 'n')
            //     direction = 1;

            // if (poSition == 'W' || poSition == 'w')
            //     direction = 2;
            // if (poSition == 'S' || poSition == 's')
            //     direction = 3;
            // if (poSition == 'E' || poSition == 'e')
            //     direction = 4;

            if (letter == 'R')
            {
                if (direction == 4)
                    direction -= 3;
                else
                    direction += 1;
                // cout << "direction= " << direction << endl; // 測試是否有轉向
            }
            if (letter == 'L')
            {
                if (direction == 1)
                    direction += 3;
                else
                    direction -= 1;
                // cout << "direction= " << direction << endl; // 測試是否有轉向
            }

            if (letter == 'F') // 只負責判斷1~4前進方向
            {
                // for (int i = 0; i < 30; i++) // 如果是有紀錄在matrix裡的特殊位置的話 跳出迴圈不執行
                // {
                //     if (initial_location_x = Last_LostA[i])
                //         if (initial_location_y = Last_LostB[i])
                //             break;
                // }

                if (direction == 1)
                    initial_location_y += 1;

                else if (direction == 2)
                    initial_location_x += 1;

                else if (direction == 3)
                    initial_location_y -= 1;

                else if (direction == 4)
                    initial_location_x -= 1;
                // cout << "direction= " << direction << endl; // 檢查direction方向
            }

            if (initial_location_x > rangeA || initial_location_y > rangeB || initial_location_x < 0 || initial_location_y < 0) // 判斷bot是否LOST
            {
                cout << initial_location_x << " " << initial_location_y << " " << poSition << " "
                     << "LOST" << endl;

                Last_LostA[i] = initial_location_x;
                Last_LostB[i] = initial_location_y;
                i++;
                break;
            }
            else
            {
                cout << initial_location_x << " " << initial_location_y << " " << poSition << endl;
            }

            // if (letter == 'm') //test用
            //     direction = 1;
            // else if (letter == 'o')
            // {
            //     direction += 1;
            // }

            // if (letter == 't')
            //     direction += 1;
            //                 cout << direction;
        }
    }
}