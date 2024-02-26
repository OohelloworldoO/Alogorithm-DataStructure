#include <bits/stdc++.h>
using namespace std;

// 方法1 : 雙迴圈 但效率低 因為是窮舉法(暴力法) 時間複雜度為 O(n²)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j}; // c++ 11的新用法 return整個function的{}內的值的list
                }
            }
        }
        return {};
    }
};

// 方法2:

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9; // [0,1]
    // vector<int> nums = {3,2,4}; int target = 6; // [1,2]
    // vector<int> nums = {3,3}; int target = 6; // [0,1]
    Solution s;
    vector<int> ret = s.twoSum(nums, target);
    cout << "[" << ret[0] << "," << ret[1] << "]\n";

    return 0;
}