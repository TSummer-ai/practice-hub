#include <vector>
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
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> result;
        if (root == nullptr)
        {
            return result;
        }
        result.push_back(root->val);                      // 访问根节点
        vector<int> left = preorderTraversal(root->left); // 递归访问左子树
        result.insert(result.end(), left.begin(), left.end());
        vector<int> right = preorderTraversal(root->right); // 递归访问右子树
        result.insert(result.end(), right.begin(), right.end());
        return result;
    }
};