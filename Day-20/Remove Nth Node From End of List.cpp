class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     //nth node form end = (len-n+1)th node from start
        int len=0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        if(n > len){
            return head;
        }
        else if(n == len){
            return head->next;
        }
        else{
            ListNode* prev = NULL;
            ListNode* curr = head;
            int diff = len-n;
            
            for(int i=0; i<diff;i++){
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            return head;
        }
    }
};