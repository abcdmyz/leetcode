/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    bool dfs(TreeNode *node, int sum, int now)
    {
        if ( node==NULL )
            return false;
            
        if ( node->left==NULL && node->right==NULL )
        {
            if ( now+node->val==sum )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
        return ( dfs(node->left, sum, now+node->val) || dfs(node->right, sum, now+node->val));
    }

    bool hasPathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if ( root==NULL )
            return false;
            
        return dfs(root, sum, 0);
    }
};
