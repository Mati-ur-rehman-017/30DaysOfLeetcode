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
    int sumNumbers(TreeNode* root) {
        return dfs(root,0);
    }
    int dfs(TreeNode* root,int n){
        if(!root)return n;
        int a=(n*10)+root->val;
        if(!root->left && !root->right){
            return a;
        }else if(!root->left){
            return dfs(root->right,a);
        }else if(!root->right){
            return dfs(root->left,a);
        }
        return  dfs(root->left,a)+dfs(root->right,a);
    }
};