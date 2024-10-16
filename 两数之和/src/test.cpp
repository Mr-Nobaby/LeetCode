#include <vector>
#include <string>
#include <iostream>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

 // @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        // std::cout<<"mdl"<<std::endl;
        vector<int> result(2);
        int size = nums.size();
        // cout<<size<<"ac"<<j<<endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                int sum = nums[i] + nums[j];
                if (sum == target)
                {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }

        }
        return std::vector<int>();;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    vector<int> result = s.twoSum(nums, target);

    for (int i = 0; i < result.size(); i++)
    {
        printf("% d", result[i]);
    }
}