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

    int walkPath( TreeNode *root, int num )
    {
        int r1=0;
        int r2=0;
        
        if ( root->left == NULL && root->right == NULL )
        {
            return num*10 + root->val;
        }
        
        if ( root->left != NULL )
        {
            r1 = walkPath(root->left, num*10 + root->val);
        }
        
        if ( root->right != NULL )
        {
            r2 = walkPath(root->right, num*10 + root->val); 
        }
        
        return r1+r2;
    }

    int sumNumbers(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if ( root == NULL )
            return 0;
        
        int res = walkPath( root, 0 );        
        return res;
    }
};
