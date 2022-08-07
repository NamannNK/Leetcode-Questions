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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        
        int size=0;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        if(size == n)return head->next;
        int i=1;
        temp=head;
        cout<<size;
        while(i!=size-n){
            temp=temp->next;
            i++;
        }
        temp->next = temp->next->next;
        return head;
    }
};