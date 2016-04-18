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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = root;
        while(root!=NULL){
            if(p->val<root->val&&q->val<root->val){
                root=root->left;
            }else{
                if(p->val>root->val&&q->val>root->val){
                    root = root->right;
                }else{
                    res = root;
                    break;
                }
            }
        }
        return res;
    }
};

/*
//if parent given
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res=root;
        while(p!=root&&q!=root){
            p = p->parent;
            if(q==p){
                res = q;
                break;
            }
        }
        while(q!=root&&res!=q){
            q = q->parent;
            if(p==q){
                res = p;
                break;
            }
        }
        return res;
    }
};
*/