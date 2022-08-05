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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>odd;
        vector<int>even;
        int i=1;
        ListNode* temp=head;
        while(temp!=NULL){
            if(i%2==0){
                even.push_back(temp->val);
            }
            else{
                odd.push_back(temp->val);
            }
            i++;
            temp = temp->next;
        }
        temp=head;
        i=1;
        while(i<=odd.size()){
            temp->val= odd[i-1];
            i++;
            temp=temp->next;
        }
        i=0;
        while(i!=even.size()){
            temp->val = even[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};