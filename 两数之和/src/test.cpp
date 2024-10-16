#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

 // @lc code=start
//暴力查找
class Solution {
public:
    //暴力查找
    //vector<int> twoSum(vector<int>& nums, int target)
    //{
    //    // std::cout<<"mdl"<<std::endl;
    //    vector<int> result(2);
    //    int size = nums.size();
    //    // cout<<size<<"ac"<<j<<endl;
    //    for (int i = 0; i < size; i++)
    //    {
    //        for (int j = i + 1; j < size; j++)
    //        {
    //            int sum = nums[i] + nums[j];
    //            if (sum == target)
    //            {
    //                result[0] = i;
    //                result[1] = j;
    //                return result;
    //            }
    //        }
    //    }
    //    return std::vector<int>();;
    //}
    
    //哈希表
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result(2);
        unordered_map<int, int> hashTable;
        for (int i = 0; i < nums.size(); i++)
        {
            hashTable[nums[i]] = i;
            //printf("%d %d->",hashTable.)
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            auto it = hashTable.find(diff);
            if (it != hashTable.end() && it->second != i)
            {
                result[0] = i;
                result[1] = it->second;
                return result;  // 找到结果后立即返回
            }
        }
        return {};
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