// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
// bool minStr(string a,string b)
//     {
//         string c;
//         if(a.length()==0){
//             return true;
//         }
//         if(b.length()==0){
//             return false;
//         }
//         int m=a.length();
//         int n=b.length();
//         int k=min(m,n);
//         for(int i=0;i<k;i++){
//             if(a[i]==b[i]){
//                 continue;
//             }
//             if(a[i]<b[i]){
//                 return false;
//             }else{
//                 return true;
//             }
//         }
//         return false;
//     }
//     string smallestFromLeaf(TreeNode* root) {
//         if(root==nullptr){
//             return "";
//         }
//         if(!root->left&&!root->right){
//             return string(1,char(root->val+97));
//         }
//         // if("c">"b"){
//         //     cout<<"s";
//         // }
//         // return "a";
//         string a=smallestFromLeaf(root->right);
//         string b=smallestFromLeaf(root->left);
        
//         string c;
//         if(minStr(a,b)){
//             c=b;
//         }else{
//             c=a;
//         }
//         return c+string(1,char(root->val+97));
//     }
// };
class Solution {
public:
    string path;
    priority_queue<string, vector<string>, greater<string>>pq;
    void paths(TreeNode* root)
    {
        if(!root) return;

        char ch = root->val +'a';
        path.insert(path.begin(), ch);
        if(!root->left and !root->right) pq.push(path);
        
        paths(root->left);
        paths(root->right);

        path.erase(path.begin());
    }

    string smallestFromLeaf(TreeNode* root) 
    {
        paths(root);
        return pq.top();
    }
};