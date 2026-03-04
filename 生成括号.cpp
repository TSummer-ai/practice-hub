#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    void dfs(vector<string> &ans, string &temp, int n, int l, int r)
    {
        if (l == n && r == n)
        {
            ans.push_back(temp);
            return; // 为回溯做准备
        }
        if (l > n || r > n || r > l)
        {
            return;
        }
        temp.push_back('(');
        dfs(ans, temp, n, l + 1, r);
        temp.pop_back(); // 回溯撤销左括号
        temp.push_back(')');
        dfs(ans, temp, n, l, r + 1);
        temp.pop_back();
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string temp;
        dfs(ans, temp, n, 0, 0);
        return ans;
    }
};
int main()
{
    Solution solution;
    int n;
    cout << "需要生成的有效括号的对数n：";
    cin >> n;
    // 调用函数生成有效括号组合
    vector<string> result = solution.generateParenthesis(n);

    // 输出结果
    cout << "n = " << n << " 时，所有有效括号组合为：" << endl;
    for (int i = 0; i < result.size(); ++i)
    {
        cout << i + 1 << ". " << result[i] << endl;
    }

    return 0;
}