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
 * [121] ������Ʊ�����ʱ��
 */

 // @lc code=start
class Solution {
public:
    int FindStackMax(stack<int>& S)
    {
        if (S.empty())
        {
            throw runtime_error("ջΪ�գ��޷��ҵ����Ԫ�ء�");
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

    //�����ⷨ
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
    //�Ż�һ�α��� prices ���飬ͨ��ά��һ����С������۸񣬲�ʵʱ������ܵ�������󼴿�
    int maxProfit(vector<int>& prices)
    {
        if (prices.empty()) return 0;
        int minPrice = prices[0];
        int maxProfit = 0;
        for (size_t i = 1; i < prices.size(); i++)
        {
            //������С����۸�
            if (minPrice > prices[i]) minPrice = prices[i];
            //���㵱ǰ���󲢸����������
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