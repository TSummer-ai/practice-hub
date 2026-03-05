// 爬楼梯
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int climbStairs(int n)
    {
        vector<int> dp(n + 1); // dp[i] 表示爬到第 i 级台阶的方法数,只定义 dp(n)，那么这个 vector 的下标范围是 0 ~ n-1，无法存储 dp[n] 的值
        if (n <= 2)
            return n;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};