/*My Leet Code id = im-yash21
Runtime:0 ms , Memory Usage: 10.5 MB*/
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *nxt = head;
        if(head==NULL || head->next == NULL) return head;
        while(head->next!=NULL){
            int temp = head->val;
            head->val = head->next->val;
            head->next->val = temp;
            head = head->next->next;
            if(head==NULL) return nxt;
        }
        return nxt;
    }
};
