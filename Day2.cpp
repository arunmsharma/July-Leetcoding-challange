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
    int height(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    void helper(TreeNode *root,int level,vector<int>&v){
        if(root==NULL){
            return;
        }
        if(level==1){
            v.push_back(root->val);
            return;
        }
        if(level>1){
            helper(root->left,level-1,v);
            helper(root->right,level-1,v);
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        int h=height(root);
        for(int i=h;i>=1;i--){
            vector<int>v;
            helper(root,i,v);
            ans.push_back(v);
        }
        return ans;
    }
};
