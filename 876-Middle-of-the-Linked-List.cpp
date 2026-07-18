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
    ListNode* middleNode(ListNode* head) {

        ListNode *p=head;
        int cnt=0;

        while(p!=nullptr){
            cnt++;
            p=p->next;
        }

        int pos=(cnt/2)+1;

        p=head;

        for(int i=1;i<pos;i++){
            p=p->next;
        }

        return p;


        
    }
};