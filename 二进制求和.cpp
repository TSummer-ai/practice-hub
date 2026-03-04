// 补全开头
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result;
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry > 0)
        {
            int sum = 0;
            sum += carry;
            if (i >= 0)
            {
                sum += a[i] - '0'; // 将字符转换为整数
                i--;
            }
            if (j >= 0)
            {
                sum += b[j] - '0';
                j--;
            }
            carry = sum / 2;
            result.push_back(sum % 2 + '0'); // 将整数转换回字符并添加到结果中
        }
        reverse(result.begin(), result.end());
        return result;
    }
};