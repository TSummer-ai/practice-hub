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
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        return l;
    }
};