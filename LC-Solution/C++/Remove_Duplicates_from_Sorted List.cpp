/*#My Leet Code id = im-yash21
#Runtime:16 ms , Memory Usage: 16.7 MB */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *k = head;
        while(head!=NULL){
            if(head->next==NULL){
                break;
            }
            if(head->val == head->next->val){
                head->next = head->next->next;
                continue;
            }
            head = head->next;
        }
        return k;
    }
};