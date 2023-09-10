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
    
    void insertAtTail(ListNode* &head,ListNode* &tail,int digit){
        ListNode* temp=new ListNode(digit);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;          
        }else{
            tail->next=temp;
            tail=temp;
        }
    }
    ListNode* reverse1(ListNode*& head){
         ListNode* curr=head;
         ListNode* prev=NULL;
         ListNode* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev; //which head 
        
    }
    
    ListNode* add(ListNode* &l1, ListNode* &l2){
        int carry=0;
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        while(l1 !=NULL || l2 != NULL || carry!=0){
            int val1=0;
            if(l1!=NULL)
                val1=l1->val;
            int val2=0;
            if(l2!=NULL)
                val2=l2->val;
            int sum=carry+val1+val2;
            int digit=sum%10;
            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;   
        }
        return anshead;
    }
    ListNode* addTwoNumbers(ListNode* &l1, ListNode* &l2) {
        // l1=reverse1(l1);
        // l2=reverse1(l2);
        ListNode* ans=add(l1,l2)
        // ans=reverse1(ans);
        return ans;
    }
};