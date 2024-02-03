/*
Mutant Flatworld Expolrers

the first row of input represent the world spatial extent
the second one is the initial location of the bot and bot's command

方位:
       1
    4     2
       3
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int rangeA, rangeB, initial_location_x, initial_location_y, LOST = 0; // spatial extent(x, y)、initial location(x, y)、toDetect_LOST
    int Last_LostA[30], Last_LostB[30], i = 0;                            // 遺失前位置 用matrxi紀錄?
    int direction = 0, temp = 0;                                          // 方位判斷
    char poSition;                                                        // 初始方向
    string inPut_command;
    cin >> rangeA >> rangeB;
    while (cin >> initial_location_x >> initial_location_y >> poSition >> inPut_command)
    {
        for (char letter : inPut_command) // 建議在 string 變數而不是 char 變數中進行輸入以避免此錯誤, string => " " char => ' '
        {
            if (poSition == 'N')
                direction = 1;
            if (poSition == 'W')
                direction = 2;
            if (poSition == 'S')
                direction = 3;
            if (poSition == 'E')
                direction = 4;

            if (letter == 'R')
            {
                // if (direction == 4)
                //     direction = 1;
                // else
                direction += 1;
                cout << direction << endl; // 測試是否有轉向
            }
            if (letter == 'L')
            {
                initial_location_y -= 1;
                cout << direction << endl; // 測試是否有轉向
            }

            if (letter == 'F') // 只負責判斷1~4前進方向
            {
                temp += 1;
                if (direction == 1)
                    initial_location_y += 1;

                if (direction == 2)
                    initial_location_x += 1;

                if (direction == 3)
                    initial_location_y -= 1;

                if (direction == 4)
                    initial_location_x -= 1;
                cout << direction << endl;
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
        }
    }
}