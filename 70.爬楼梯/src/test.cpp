#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

 // @lc code=start
class Solution {
public:
    ////递归法
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
    //            //注意更新变量的顺序
    //            fn_2 = fn_1;
    //            fn_1 = current;
    //        }
    //        return current;
    //    }
    //}
    //通项公式
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