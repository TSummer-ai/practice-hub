#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        int temp = 0;
        string result;
        while (columnNumber)
        {
            columnNumber--; // 将1-26映射为0-25
            temp = columnNumber % 26;
            columnNumber /= 26;
            result.push_back('A' + temp);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};