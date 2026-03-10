#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = prices.size();
        int maxProfit = 0;
        for (int i = 1; i < l; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (prices[i] > prices[j])
                {
                    maxProfit = max(maxProfit, prices[i] - prices[j]);
                }
            }
        }
        return maxProfit;
    }
};