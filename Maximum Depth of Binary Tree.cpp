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
    int getHeight(TreeNode *node)
    {
        if (node == NULL)
        {
            return 0;
        }
                
        int leftH = getHeight(node->left);
        int rightH = getHeight(node->right);
        
        int maxH = leftH > rightH ? leftH : rightH;
        
        return maxH + 1;
    }
    
    int maxDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if ( root == NULL )
        {
            return 0;
        }
        
        return getHeight(root);
    }
};
