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
         ListNode* cur=head;
        set<ListNode*> s;
        while(cur!=NULL){
            if(s.count(cur)){
                return cur;
            }
            s.insert(cur);
            cur=cur->next;
        }
        return NULL;
    }
};