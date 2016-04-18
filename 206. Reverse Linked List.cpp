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
    ListNode* reverseList(ListNode* head) {
        ListNode* res;
        ListNode* temp;
        ListNode* pnext = NULL;
        if(head == NULL || head->next == NULL){
            res = head;
        }else{
            while(head!=NULL){
                temp = head;
                head = temp->next;
                temp->next =pnext;
                pnext = temp;
            }
            res = temp;
        }
        return res;
    }
};