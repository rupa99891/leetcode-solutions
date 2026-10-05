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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* pre=&dummy;
        ListNode* curr=head;
        while(curr!=nullptr){
            if(curr->val==val){
                pre->next=curr->next;
                delete curr;
                curr=pre->next;
            }
            else{
                pre=curr;
                curr=curr->next;
            }
        }
        return dummy.next;

    }
};