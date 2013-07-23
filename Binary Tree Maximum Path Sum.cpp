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

    int dfs( TreeNode *node, int &result )
    {
        if ( node->left==NULL && node->right==NULL )
        {
            if ( result<node->val )
                result=node->val;
                
            return node->val;
        }
        
        int r1=0;
        int r2=0;
        int max=node->val;
        
        if ( node->left!=NULL )
        {
            r1=dfs(node->left, result);
            if ( r1+node->val > max )
                max = r1+node->val;
        }
        if ( node->right!=NULL )
        {
            r2=dfs(node->right, result);
            if ( r2+node->val > max )
                max = r2+node->val;
        }
        
        
        if ( max>result )
            result = max;
        if ( r1+r2+node->val > result )
            result = r1+r2+node->val;
        
        return max;
    }

    int maxPathSum(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if ( root==NULL )
            return 0;
        
        int result=root->val;
        dfs(root, result);
        
        return result;
    }
};
