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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root==nullptr){
            return nullptr;
        }
       if(depth==1){
        TreeNode* temp=new TreeNode(val,root,nullptr);
        return temp;
       }
       if(depth==2){
        TreeNode* temp=new TreeNode(val,root->left,nullptr);
        TreeNode* temp2=new TreeNode(val,nullptr,root->right);
        root->right=temp2;
        root->left=temp;
        return root;
       }
       addOneRow(root->right,val,depth-1);
        addOneRow(root->left,val,depth-1);
        return root; 
    }
};