/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int find(TreeNode*root){
        
        if(root==nullptr)
            return 0;
        
        int l = find(root->left);
        if(l==-1) return -1;
        int r = find(root->right);
        if(r==-1) return -1;
        
        if(abs(l-r)>1)
            return -1;
    
        return 1+max(l,r);
    }
    
    
    bool isBalanced(TreeNode* root) {
        return find(root) != -1;
    }
};