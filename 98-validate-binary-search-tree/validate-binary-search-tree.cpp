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
    long long int prev=LONG_MIN;
    bool isValidBST(TreeNode* root) {
     return dfs(root);
    }
    bool dfs(TreeNode* root){
        if(root==nullptr){
            return true;
        }
        if(!dfs(root->left))return false;
        if(root->val<=prev){
            return false;
        }else{
            prev=root->val;
        }
        return dfs(root->right);
    }
};