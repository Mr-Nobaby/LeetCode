// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>
#include <stdexcept>

//#include <limits.h> 
using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

 // @lc code=start
class Solution {
public:
    int FindStackMax(stack<int>& S)
    {
        if (S.empty())
        {
            throw runtime_error("栈为空，无法找到最大元素。");
        }
        int max = S.top();
        S.pop();

        while (!S.empty())
        {
            int current = S.top();
            max = (max > current ? max : current);
            S.pop();

        }
        return max;
    }

    //暴力解法
    //int maxProfit(vector<int>& prices) 
    //{
    //    stack<int> Profit;
    //    if (prices.size() == 1) return 0;
    //    for (int i = 0; i < prices.size(); i++)
    //    {
    //        for (size_t j = i+1; j < prices.size(); j++)
    //        {
    //            int buy = prices[i];
    //            int sell = prices[j];
    //            int pro = sell - buy;
    //            Profit.push(pro);
    //        }
    //    }
    //    
    //    //while (!Profit.empty())
    //    //{
    //    //    printf("%d ", Profit.top());
    //    //    Profit.pop();
    //    //}
    //    int profitMax = FindStackMax(Profit);
    //    //printf("profitMax: %d ", profitMax);
    //    if (profitMax > 0) return profitMax;
    //    return 0;
    //}
    //优化一次遍历 prices 数组，通过维护一个最小的买入价格，并实时计算可能的最大利润即可
    int maxProfit(vector<int>& prices)
    {
        if (prices.empty()) return 0;
        int minPrice = prices[0];
        int maxProfit = 0;
        for (size_t i = 1; i < prices.size(); i++)
        {
            //更新最小买入价格
            if (minPrice > prices[i]) minPrice = prices[i];
            //计算当前利润并更新最大利润
            int currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit) maxProfit = currentProfit;
        }
        return maxProfit;
    }
};
int main()
{
    {
        Solution S;
        vector<int>  prices = { 7,1,5,3,6,4 };
        printf("profitMax: %d ", S.maxProfit(prices));

        
        //printf("%zd", prices.size());
    }
}
// @lc code=end