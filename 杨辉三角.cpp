#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res(numRows);
        for (int i = 0; i < numRows; i++)
        {
            res[i].resize(i + 1);      // 每行的元素个数等于行数
            res[i][0] = res[i][i] = 1; // 每行的第一个和最后一个元素为1
            for (int j = 1; j < i; j++)
            {
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
            }
        }
        return res;
    }
};