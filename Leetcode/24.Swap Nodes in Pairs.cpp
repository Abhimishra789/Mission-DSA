class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        ListNode* first=head;
        ListNode* second=head->next;
        while(first && second){
            swap(first->val,second->val);
            first=second->next;
            if(first) second=first->next;
        }
        return head;
    }
};
