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
    ListNode* mid(ListNode* head){
       if(head==NULL || head==head->next){
        return head;
    }   
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
       fast=fast->next->next;
      
        slow=slow->next;
    }
    return slow;
}
    ListNode* MergeSort(ListNode* p1,ListNode* p2){
        ListNode* ans=new ListNode(0);
        ListNode* curr=ans;       
        if(p1==NULL || p2==NULL){
            return (p1==NULL)? p2:p1;
        }        
        while(p1!=NULL && p2!=NULL){
            if(p1->val < p2->val){
                curr->next=p1;
                p1=p1->next;
            }else{
                curr->next=p2;
                 p2=p2->next;
            }
            curr=curr->next;
        }        
         if(p1!=NULL || p2!=NULL){
            curr->next= (p1!=NULL)? p1:p2;
        }              
        return ans->next;         
    }
    
ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* Mid=mid(head);
        ListNode* newhead=Mid->next;
        Mid->next=NULL;               
        ListNode* left_half=sortList(head);
        ListNode* right_half=sortList(newhead);              
        return MergeSort(left_half,right_half);                
    }
};