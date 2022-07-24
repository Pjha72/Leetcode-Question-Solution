/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    bool checkPalindrome(vector<int> arr){
        int start = 0, end = arr.size()-1;
        while(start <= end){
            if(arr[start] != arr[end]){
                
                return false;
            }
            start++,end--;
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        // step-1 : create an array
        vector<int> arr;
        //step-2 : copy linked list content into an array
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        // Apply check palindrome logic
        return checkPalindrome(arr);
    }
};