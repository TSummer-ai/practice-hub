#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> res(rowIndex + 1, 1); // 每行的元素个数等于行数
        for (int i = 0; i <= rowIndex; i++)
        {
            for (int j = i - 1; j >= 1; j--)
            {
                res[j] += res[j - 1]; // 从后往前更新每行的元素值，避免覆盖之前的值
            }
        }
        return res;
    }
};
