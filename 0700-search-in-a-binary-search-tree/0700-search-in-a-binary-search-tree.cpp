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
    
//     void traverse( TreeNode*root , int val , TreeNode* &store){
        
//          if(root->val == val){
//             store = root;
//             return ;
//         }
        
//         if(! root->left &&  ! root->right){
//             return ;
//         }
        
//         if(root->val > val){
//             traverse(root->left,val,store);
//         }
//         else{
//             traverse(root->right,val,store);
//         }
        
        
        
// }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root==nullptr || root->val == val){
            return root;
        }

       
        if(root->val > val){
            return searchBST(root->left,val);
        }
        else{
            return searchBST(root->right,val);
        }
        return nullptr;
    }
};