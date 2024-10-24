/*My Leet Code id = im-yash21
Runtime:30 ms , Memory Usage: 36.3 MB*/
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next == NULL ) return head;
        ListNode *Tmp = head;
        while(head->next!=NULL){
            int x = head->val;
            int y = head->next->val;
            int z;
            for(int i=1;i<=x && i<=y ; i++){
                if(x%i==0 && y%i == 0) z  = i;
            }
            ListNode *tmp = new ListNode;
            tmp->val = z;
            tmp->next = head->next;
            head->next = tmp;
            head = head->next->next;
        }
        return Tmp;
    }
