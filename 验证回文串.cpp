#include <string>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string str; // 过滤掉非字母和数字的字符
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] += 32;
                }
                str += s[i];
            }
        }
        int left = 0, right = str.size() - 1;
        while (left < right)
        {
            if (str[left] == str[right])
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};