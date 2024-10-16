#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] ��¥��
 */

 // @lc code=start
class Solution {
public:
    ////�ݹ鷨
    //int climbStairs(int n) 
    //{
    //    int fn_2 = 1, fn_1 = 2, current = 0;
    //    if (n == 1)
    //    {
    //        return 1;
    //    }
    //    else if (n == 2)
    //    {
    //        return 2;
    //    }
    //    else
    //    {
    //        for (int i = 3; i <= n; i++)
    //        {
    //            current = fn_1 + fn_2;
    //            //ע����±�����˳��
    //            fn_2 = fn_1;
    //            fn_1 = current;
    //        }
    //        return current;
    //    }
    //}
    //ͨ�ʽ
    int climbStairs(int n)
    {
        double sqrt5 = sqrt(5);
        double fibn = (pow((1 + sqrt5) / 2, n+1) - pow((1 - sqrt5) / 2, n+1)) / sqrt5;
        return round(fibn);
    }

};
// @lc code=end


int main()
{
    Solution s;
    for (int i = 1; i < 11; i++)
    {
        printf("%d ", s.climbStairs(i));
    }
    

}