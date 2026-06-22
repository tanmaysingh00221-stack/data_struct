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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum;
        int carry=0;
        ListNode* head=NULL;
        ListNode* tail=NULL;
       while(l1 || l2 || carry){
        sum=carry;
        if(l1){
            sum=sum+l1->val;
            l1=l1->next;
        }
        if(l2){
            sum=sum+l2->val;
            l2=l2->next;
        }
        if(head==NULL){
            ListNode* newnode= new ListNode(sum%10);
            tail=head=newnode;
            carry=sum/10;
        }
        else{
            ListNode* newnode= new ListNode(sum%10);
            tail->next=newnode;
            tail=newnode;
            carry=sum/10;
        }
        
       } 
       return head;

    }
};