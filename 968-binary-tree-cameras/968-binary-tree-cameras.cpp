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
    string helper(TreeNode *root, int &minCamera) {
        
        if(root == nullptr) return "ok";
        
        string left = helper(root->left, minCamera);
        string right = helper(root->right, minCamera);
        
        
        if(left == "want" || right == "want") {
            minCamera++;
            return "provide";
        }
        
        else if (left == "provide" || right == "provide") return "ok";
        
        return "want";
        
    }
    int minCameraCover(TreeNode* root) {
       int minCamera = 0;
        
        if(helper(root, minCamera) == "want") minCamera++;

        return minCamera; 
    }
};