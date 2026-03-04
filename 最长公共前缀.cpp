#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            while (strs[i].find(prefix) != 0)
            {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty())
                    return "";
            }
        }
        return prefix;
    }
};
int main()
{
    vector<string> strs = {"abce", "acrg"};
    Solution sol;
    cout << sol.longestCommonPrefix(strs) << endl;
    return 0;
}