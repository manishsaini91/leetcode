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
        int count=0;
        ListNode *flag=head;
        while(flag!=NULL){
            count++;
            flag=flag->next;
        }
        if(count==1){
            return NULL;
        }
        if(n==count){
            return head->next;
        }

        if(count==2 and n==1){
            head->next=NULL;
            return head;
        }
        ListNode *flag2=head;
        int f=count-n;
        int count2=0;
        while(flag2!=NULL and count2<f-1){ 
            count2++;
            flag2=flag2->next;
        }
        flag2->next=flag2->next->next;
        return head;      
    }
};