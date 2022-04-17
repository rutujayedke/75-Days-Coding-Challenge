class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //Two Pointer method
        ListNode* p1 = head;
        ListNode* p2 = head;
        if(head != NULL){
            while(p1 != NULL and p1->next != NULL){
                p1 = p1->next->next;
                p2 = p2->next;
            }
        }
        return p2;
    }
};