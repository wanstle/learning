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
    int v[1001];
    int sum = 0;
    int numColor(TreeNode* root) {
        lrs(root);
        for(int i = 0;i < 1001;i++){
            sum += v[i];
        }
        return sum;
    }
    void lrs(TreeNode* root){
        v[root->val] = 1;
        if(root->left!=nullptr)
            lrs(root->left);
        if(root->right!=nullptr)
            lrs(root->right);
    }
};