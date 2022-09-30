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
    bool checkTree(TreeNode* root) {
        if(root == NULL){
            return false;
        }
        // int ans = root->left->val + root->right->val;
        // if(ans == root->val){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                
                int parent = temp->val;
                int child1 = 0;
                int child2 = 0;
                
                if(temp->left){
                    q.push(temp->left);
                    child1+=temp->left->val;
                }
                else{
                    child2++;
                }
                
                if(temp->right){
                    q.push(temp->right);
                    child1+=temp->right->val;
                }
                else{
                    child2++;
                }
                if(child2 == 2) continue;
                if(parent == child1)    return true;
            }
        }
        return false;
    }
};