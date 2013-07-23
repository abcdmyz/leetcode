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
        TreeLinkNode *row = NULL;
        TreeLinkNode *next = NULL;
        
        while ( node!=NULL )
        {
            next=NULL;
            row=NULL;
            
            while ( node!= NULL )
            {
                if ( next==NULL )
                {
                    if ( node->left!=NULL )
                    {
                        next=node->left;
                    }
                    else
                    {
                        next=node->right;
                    }
                }
                
                if ( node->left != NULL )
                {
                    if ( row != NULL )
                    {
                        row->next = node->left;
                    }
                    row = node->left;
                }
                if ( node->right != NULL )
                {
                    if ( row != NULL )
                    {
                        row->next = node->right;
                    }
                    row = node->right;
                }  
                
                node = node->next;
            }
            
            node=next;

        }
    }
};
