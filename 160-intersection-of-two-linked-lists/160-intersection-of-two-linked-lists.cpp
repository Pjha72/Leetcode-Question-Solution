/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA , *temp1=headB;
        int temp3=0,temp4=0;
        while(temp){
            temp3++;
            temp=temp->next;
        }
        while(temp1){
            temp4++;
            temp1=temp1->next;
        }
        if(temp3>temp4){
            int bhai = temp3-temp4;
            while(bhai--){
                headA=headA->next;
            }
        }
        else{
            int bhai=temp4-temp3;
            while(bhai--){
                headB=headB->next;
            }
        }
        while(headA&&headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};