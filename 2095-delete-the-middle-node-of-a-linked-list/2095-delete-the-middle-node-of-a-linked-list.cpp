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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* flag=head;
        
        int count=0;
        while(flag!=NULL){
            count++;
            flag=flag->next;
        }
        if(count==1){
            return NULL;
        }
        int target;
        // if(count%2==0)
            // target=count/2;
        // else
            target=count/2;
        ListNode* flag2=head;
        // ListNode* ans=flag2;
        int count2=0;
        while(flag2!=NULL  and count2<target-1){
            count2++;
            flag2=flag2->next;
        }
        if(flag2->next)flag2->next=flag2->next->next;
        return head;
    }
};