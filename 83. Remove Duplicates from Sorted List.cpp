
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }else{
            ListNode *temp=head->next;
            ListNode *res=head;
            while(temp){
                if(temp->val==head->val){
                    temp = temp->next;
                    head->next = NULL;
                }else{
                    head->next = temp;
                    head = temp;
                    temp = temp->next;
                    head->next = NULL;
                }
            }
            return res;
        }
    }
};