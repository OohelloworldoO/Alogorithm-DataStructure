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

*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int rangeA, rangeB, initial_location_x, initial_location_y, LOST = 0; // spatial extent(x, y)、initial location(x, y)、toDetect_LOST
    int Last_LostA[30], Last_LostB[30], i = 0;                            // 遺失前位置 用matrxi紀錄?
    int direction = 0, temp = 0;                                          // 初始方向 方位判斷
    char poSition;
    string inPut_command;
    cin >> rangeA >> rangeB;
    while (cin >> initial_location_x >> initial_location_y >> inPut_command >> inPut_command)
    {
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
            if (letter == 'N')
            {
                direction += 1;
                cout << direction << endl;
            }

            if (letter == 'W')
                direction += 2;
            if (letter == 'S')
                direction += 3;
            if (letter == 'E')
                direction += 4;

            if (letter == 'R')
            {
                if (direction == 4)
                    direction -= 3;
                else
                    direction += 1;
                cout << "direction= " << direction << endl; // 測試是否有轉向
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
                temp += 1;
                if (direction == 1)
                    initial_location_y += 1;

                else if (direction == 2)
                    initial_location_x += 1;

                else if (direction == 3)
                    initial_location_y -= 1;

                else if (direction == 4)
                    initial_location_x -= 1;
                cout << "direction= " << direction << endl; // 檢查direction方向
            }
            if (initial_location_x > rangeA || initial_location_y > rangeB || initial_location_x < 0 || initial_location_y < 0) // 判斷bot是否LOST
            {

                cout << initial_location_x << ", " << initial_location_y << " "
                     << "LOST" << endl;

                Last_LostA[i] = initial_location_x;
                Last_LostB[i] = initial_location_y;
                LOST == 1;
                break;
            }
            else
                cout << initial_location_x << ", " << initial_location_y << endl;

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