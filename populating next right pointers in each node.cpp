/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        TreeLinkNode *node = root;
        
        while ( node!=NULL )
        {
            TreeLinkNode *row = node;
            
            while ( row!=NULL )
            {
            
                if ( row->left!=NULL )
                {
                    row->left->next = row->right;
                }
            
                if ( row->right!=NULL && row->next!=NULL )
                {
                    row->right->next = row->next->left;
                }
            
                row = row->next;
            }
            
            node = node->left;
        }
        
    }
};
