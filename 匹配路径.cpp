#include <iostream>
#include <queue>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        int sun = 0;
        return dfs(root, targetSum, sun);
    }

private:
    bool dfs(TreeNode *root, int targetSum, int sum)
    {
        if (root == nullptr)
        {
            return false;
        }
        sum += root->val;
        if (root->left == nullptr && root->right == nullptr)
        {
            if (sum == targetSum)
            {
                return true;
            }
        }
        return dfs(root->left, targetSum, sum) || dfs(root->right, targetSum, sum);
    }
};