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
    TreeNode* helper(vector<int>&preorder, int pre_start, int pre_end, vector<int>&inorder, int in_start, int in_end){
        
        if(pre_start>pre_end) return nullptr;
        if(pre_start==pre_end) return new TreeNode(preorder[pre_start]);
        
        TreeNode* root = new TreeNode(preorder[pre_start]);
        int inorder_mid,preorder_mid;
        
        for(inorder_mid=in_start; inorder_mid<=in_end; ++inorder_mid)
            if(inorder[inorder_mid]==preorder[pre_start]) break;
        preorder_mid = pre_start+inorder_mid-in_start;
            
        root->left = helper(preorder,pre_start+1,preorder_mid,inorder,in_start,inorder_mid-1);
        root->right= helper(preorder,preorder_mid+1,pre_end,inorder,inorder_mid+1,in_end);
        
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,0,preorder.size()-1, inorder, 0, inorder.size()-1);
    }
};