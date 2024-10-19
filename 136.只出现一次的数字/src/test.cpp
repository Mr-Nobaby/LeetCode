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
 * [136] ֻ����һ�ε�����
 */

 // @lc code=start
class Solution {
public:
    //���ù�ϣ��
    //std::unordered_set ���ص㣺
    //    ����洢��Ԫ�ز��ǰ��ղ���˳��洢�ģ����ǻ��ڹ�ϣֵ�����ڲ�ͬ��Ͱ�С�
    //    Ψһ�ԣ�ÿ��Ԫ���ڼ����б�����Ψһ�ģ����������ظ���Ԫ�ء�
    //    ���ٲ�����ƽ������£����롢ɾ�������ҵ�ʱ�临�Ӷ�Ϊ O(1)������ʱ�䣩�������� O(log n)��
    //    ��ϣ����ͨ����ϣ��������֯���ݣ���ϣ��������Ԫ�ط������ĸ�Ͱ�
    //    �����÷���
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
    //�����������
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
    std::vector<int> nums = { 4, 1, 2, 1, 2 };  // ʾ������
    std::cout << "The unique element is: " << S.singleNumber(nums) << std::endl;
    //std::cout << "The unique element is: " << (2 ^ 3) << std::endl;

}
