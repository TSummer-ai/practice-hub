// 69. x 的平方根
#include <iostream>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 0;
        int r = x;
        if (x <= 1)
            return x;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (mid == x / mid) // 避免 mid * mid 可能导致的整数溢出
            {
                return mid;
            }
            else if (mid < x / mid)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        return l - 1;
    }
};