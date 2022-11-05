/*
 * @lc app=leetcode.cn id=671 lang=cpp
 *
 * [671] 二叉树中第二小的节点
 */

// @lc code=start
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
    int nextmin = -1;
    int firstmin = 0;
    int findSecondMinimumValue(TreeNode* root) {
        TreeNode* parent = root;
        TreeNode* np = nullptr;
        TreeNode* ptry = nullptr;
        if(parent -> left == nullptr)
            return -1;
        if(parent -> val == parent -> left -> val){
            np = parent -> left;
            ptry = parent -> right;
        }
        else {
            ptry = parent -> left;
            np = parent -> right;
        }
        if(ptry -> val != np->val)nextmin = ptry->val;
        firstmin = np->val;
        find_min(np);
        find_min(ptry);
        if(nextmin == firstmin)return -1;
        return nextmin;

    }
    int find_min(TreeNode*parent){
        if(parent == nullptr)
            return -1;
        else if(parent->val >= nextmin && nextmin != -1)
            return -1;
        else{
            if(parent->val > firstmin)
                nextmin = parent -> val;
            find_min(parent->left);
            find_min(parent->right);
            return 0;
        }
    }
};
// @lc code=end

