#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(const string &s)
    {
        int i = (int)s.size() - 1;
        while (i >= 0 && s[i] == ' ')
            i--; // 跳过末尾空格
        int length = 0;
        while (i >= 0 && s[i] != ' ')
        {
            length++;
            i--;
        }
        return length;
    }
};

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    Solution sol;
    cout << sol.lengthOfLastWord(s) << endl;
    return 0;
}
