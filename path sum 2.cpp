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

    void dfs(TreeNode *node, int sum, int now, vector<int> path, vector<vector<int>> &allpath)
    {
        if ( node==NULL )
            return;
            
        path.push_back(node->val);
            
        if ( node->left==NULL && node->right==NULL )
        {
            if ( now+node->val==sum )
            {
                allpath.push_back(path);
            }
        }
        
        dfs(node->left, sum, now+node->val, path, allpath);
        dfs(node->right, sum, now+node->val, path, allpath);
    }

    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<vector<int>> allpath;
        vector<int> path;
        dfs(root, sum, 0, path, allpath);
        
        return allpath;
    }
};
