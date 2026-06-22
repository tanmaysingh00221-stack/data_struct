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
        ListNode* x=head;
        ListNode* y=head;
        int count=0;
        while(x!=NULL){
            x=x->next;
            count++;
        }
        if(count<=n)return head->next;
        for(int i=1;i<count-n;i++){
            y=y->next;
        }
        y->next=y->next->next;
        return head;



        
    }
};