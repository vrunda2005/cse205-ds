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
    ListNode* insertionSortList(ListNode* head) {
       
         ListNode* dummy=new  ListNode();
       
        while(head){
             ListNode* temp=dummy;
            ListNode* next=head->next;   //store after head value 
            while(temp->next && (temp->next->val<head->val)){  
                temp=temp->next;
            }         
            head->next=temp->next;
            temp->next=head;
            head=next;            
        }
        return dummy->next;
    }
};