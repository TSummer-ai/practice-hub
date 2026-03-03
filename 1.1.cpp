#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;
class Solution
{
private:
    static unordered_map<char, int> romanmap;

public:
    int romanToInt(string s)
    {
        int result = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && romanmap[s[i]] < romanmap[s[i + 1]])
            {
                result -= romanmap[s[i]];
            }
            else
                result += romanmap[s[i]];
        }
        return result;
    }
};
unordered_map<char, int> Solution::romanmap = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};
int main()
{
    Solution sol;
    cout << sol.romanToInt("III") << endl; // 输出 3
    cout << sol.romanToInt("IV") << endl;  // 输出 4
    cout << sol.romanToInt("IX") << endl;  // 输出 9
    return 0;
}