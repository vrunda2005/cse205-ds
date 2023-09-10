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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head,*fast=head,*check=head;
        if(head==NULL || head->next==NULL ){
            return NULL;
        }
        while(fast->next !=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                while(slow !=check){
                     check=check->next;
                     slow=slow->next;
                }
               return  check;
            }
           
        }
        return NULL;
    }
};