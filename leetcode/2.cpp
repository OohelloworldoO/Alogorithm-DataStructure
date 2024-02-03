/*
Mutant Flatworld Expolrers

the first row of input represent the world spatial extent
the second one is the initial location of the bot and bot's command
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int rangeA, rangeB, initial_location_x, initial_location_y, LOST = 0; // spatial extent(x, y)、initial location(x, y)、toDetect_LOST
    int warningA, warningB;
    string inPut_command;
    cin >> rangeA >> rangeB >> initial_location_x >> initial_location_y;
    while (cin >> inPut_command)
    {
        if (inPut_command == "L") // 建議在 string 變數而不是 char 變數中進行輸入以避免此錯誤
        {
            initial_location_x += 1;
        }
        if (inPut_command == "R")
        {
        }
        if (inPut_command == "F")
        {
        }
        if (initial_location_x > rangeA || initial_location_y > rangeB)
        {
            cout << initial_location_x << ", " << initial_location_y << "LOST" << endl;
            warningA = initial_location_x;
            warningB = initial_location_y;
        }
        cout << initial_location_x << ", " << initial_location_y << endl;
    }
}