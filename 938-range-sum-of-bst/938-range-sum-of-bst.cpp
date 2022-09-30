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
private:
    int sum;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        // if(root == NULL){
        //     return 0;
        // }
        sum = 0;
        traverse(root, low,high);
        return sum;
        // if(root->val<=high && root->val>=low){
        //             sum+=root->val;
        // }
//         queue<TreeNode*> q;
//         q.push(root);
        
//         while(!q.empty()){
//             int size = q.size();
//             for(int i=0;i<size;i++){
//                 TreeNode* temp = q.front();
//                 q.pop();
                
//                 if(temp->left){
//                     q.push(temp->left);
//                     if(temp->left->val<=high && temp->left->val>=low){
//                         sum+=temp->left->val;
//                     }
//                 }
//                 if(temp->right){
//                     q.push(temp->right);
//                     if(temp->right->val<=high && temp->right->val>=low){
//                         sum+=temp->right->val;
//                     }
//                 }
//             }
//         }
//         return sum;
    }
    void traverse(TreeNode* root, int low, int high){
        if(root == NULL){
            return ;
        }
        if(root->val<=high && root->val>=low){
                sum+=root->val;
        }
        if(root->val<=high){
                traverse(root->right , low, high);
        }
        if(root->val >= low){
              traverse(root->left , low, high);
        }
    }
};