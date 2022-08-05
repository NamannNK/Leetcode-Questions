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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* kth;
        ListNode* nkth;
        ListNode* temp = head;
        int i=1;
       // ListNode*temp = head;
        while(head!=NULL){
            if(i==k){
                kth = head;
            }
            i++;
            head = head->next;
        }
        int j=1;
        head = temp;
        while(head!= NULL){
            if(j==i-k){
                nkth = head;
                break;
            }
            head = head->next;
            j++;
        }
        int x = kth->val;
        kth->val = nkth->val;
        nkth->val = x;
        return temp;
    }
};