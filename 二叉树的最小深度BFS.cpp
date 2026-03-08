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
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        queue<TreeNode *> q;
        q.push(root);
        int depth = 0;
        while (q.empty() == false)
        {
            depth++;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *front = q.front();
                q.pop();
                if (front->left == nullptr && front->right == nullptr)
                {
                    return depth;
                }
                else if (front->left != nullptr && front->right != nullptr)
                {
                    q.push(front->left);
                    q.push(front->right);
                }
                else if (front->left != nullptr)
                {
                    q.push(front->left);
                }
                else if (front->right != nullptr)
                {
                    q.push(front->right);
                }
            }
        }
        return depth; // 这个return语句是为了防止编译器报错，实际运行时永远不会执行到这里
    }
};