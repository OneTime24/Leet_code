class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* curr = head;

        for(int i=1; i<left; i++){
            curr=curr->next;
        }

        stack<int> tmp;

        int r=right-left+1;

        for(int i=0; i<r; i++){
            
            tmp.push(curr->val);
            curr=curr->next;
        }

        curr=head;

        for(int i=1; i<left; i++){
            curr=curr->next;
        }

        for(int i=0; i<r; i++){
            curr->val=tmp.top();
            tmp.pop();
            curr=curr->next;
        }

        return head;
    }
};