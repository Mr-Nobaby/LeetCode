// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_set>
#include <iostream>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

 // @lc code=start
class Solution {
public:
    //利用哈希表
    //std::unordered_set 的特点：
    //    无序存储：元素不是按照插入顺序存储的，而是基于哈希值放置在不同的桶中。
    //    唯一性：每个元素在集合中必须是唯一的，即不能有重复的元素。
    //    快速操作：平均情况下，插入、删除、查找的时间复杂度为 O(1)（常数时间），而不是 O(log n)。
    //    哈希表：它通过哈希函数来组织数据，哈希函数决定元素放置在哪个桶里。
    //    基本用法：
    //int singleNumber(vector<int>& nums) 
    //{
    //    unordered_set<int> hashTable;
    //    for (int i = 0; i < nums.size(); i++)
    //    {
    //        if (hashTable.find(nums[i]) != hashTable.end())
    //        {
    //            hashTable.erase(nums[i]);
    //        }
    //        else
    //        {
    //            hashTable.insert(nums[i]);
    //        }
    //    }
    //    return *hashTable.begin();
    //}
    //利用异或运算
    int singleNumber(vector<int>& nums)
    {
        int num = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            num ^= nums[i];
            //printf("%d  ", num);
        }
        return num;
    }
};
// @lc code=end
int main() 
{
    Solution S;
    std::vector<int> nums = { 4, 1, 2, 1, 2 };  // 示例数组
    std::cout << "The unique element is: " << S.singleNumber(nums) << std::endl;
    //std::cout << "The unique element is: " << (2 ^ 3) << std::endl;

}
