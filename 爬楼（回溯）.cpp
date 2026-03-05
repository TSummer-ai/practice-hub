#include <iostream>
using namespace std;
class Solution
{
private:
    int count = 0; // count 记录爬到第 n 级台阶的方法数
    void backtrack(int current, int n)
    { // current 记录当前爬到第几级台阶 n 记录总共有多少级台阶
        if (current == n)
        {
            count++;
            return;
        }
        if (current > n)
        {
            return;
        }
        if (current < n)
        {
            backtrack(current + 1, n);
            backtrack(current + 2, n);
        }
    }

public:
    int climbStairs(int n)
    {
        count = 0;
        backtrack(0, n);
        return count;
    }
};