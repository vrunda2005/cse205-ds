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
        ListNode* curr=headA;
        int a=0;
        while(curr){
            a++;
            curr=curr->next;
        }
        curr=headB;
        int b=0;
        while(curr){
            b++;
            curr=curr->next;
        }
        int dif=abs(a-b);
        
        if(a<b){
            while(dif--){
                headB=headB->next;
               
            }
        }
        else{
            while(dif--){
                 headA=headA->next;
            }           
        }
        
        
        while(headA and headB){
             if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
       
        return NULL;
       
        
    }
};