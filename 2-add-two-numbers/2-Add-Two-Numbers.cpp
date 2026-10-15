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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        string s1;
        while(l1!=nullptr){
            s1+=to_string(l1->val);
            l1=l1->next;
        }
        string s2;
        while(l2!=nullptr){
            s2+=to_string(l2->val);
            l2=l2->next;
        }
      

        string sum="";
        int carry=0;
        int i=0;

        while(i<s1.length()||i<s2.length()||carry!=0){
            int a=0,b=0;
            if(i< s1.length()) {
                a = s1[i] - '0';
            }

            if(i <s2.length()) {
                b = s2[i] - '0';
            }

            int total=a+b+carry;

            sum+=to_string(total%10);
            carry=total/10;

            i++;
        }

        ListNode* head = new ListNode(sum[0] - '0');
        ListNode* temp = head;

        for(int i = 1; i < sum.length(); i++) {
            temp->next = new ListNode(sum[i] - '0');
            temp = temp->next;
        }


       return head;

            
    

    }
};