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
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        ListNode* temp = head;
        ListNode* pre = NULL;
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        if(count==n){
            pre = head;
            head = head->next;
            delete pre;
            return head;
        }
        int ans = count - n;
        int i = 1;
        temp = head;
        while(i!=ans){
            temp = temp->next;
            i++;
        }
        pre = temp->next;
        temp->next = pre->next;
        delete pre;
        return head;
        
    }
};