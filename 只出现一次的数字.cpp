#include <vector>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            result ^= nums[i]; // 异或运算：相同的数异或结果为0，0与任何数异或结果为该数本身，所以最终结果就是只出现一次的数字
        }
        return result;
    }
};