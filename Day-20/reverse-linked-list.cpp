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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL or head->next == NULL){
            return head;
        }
        //Recursive Methodd
        ListNode* result = reverseList(head->next);
        ListNode * temp = result;
        while(temp -> next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        head->next = NULL;
        return result;
        
            
    }
};