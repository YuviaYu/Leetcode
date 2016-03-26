/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int deep=0;
        if(root){
            int rdeep = maxDepth(root->right);
            int ldeep = maxDepth(root->left);
            deep = rdeep>ldeep?rdeep+1:ldeep+1;
        }
        return deep;
    }
    
    int isBalanced(TreeNode* root) {
        if (root == NULL){
            return true;
        }else{
            int rdeep = maxDepth(root->right);
            int ldeep = maxDepth(root->left);
            int differ = abs(rdeep-ldeep);
            if(differ>1){return false;}
        }
        return isBalanced(root->right)&&isBalanced(root->left);
    }
};