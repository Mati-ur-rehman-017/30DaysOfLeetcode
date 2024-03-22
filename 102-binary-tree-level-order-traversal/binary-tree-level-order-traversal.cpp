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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr){
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            res.push_back(vector<int>{});
            int size=q.size();
            for(int j=0;j<size;j++){
                res[i].push_back(q.front()->val);
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                if(q.front()->right){
                    q.push(q.front()->right);
                }
                q.pop();
            }
            i++;
        } 
        return res;   
    }
};