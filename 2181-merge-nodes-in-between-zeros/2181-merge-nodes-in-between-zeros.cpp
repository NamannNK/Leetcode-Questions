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
    ListNode* mergeNodes(ListNode* head) {
        while(head->val ==0)
        head = head->next;
        if(head == NULL)return NULL;
        int sum=0;
        while(head->val!=0){
            sum+=head->val;
            head = head->next;
        }
        ListNode* res = new ListNode(sum);
        ListNode*temp = res;
        sum=0;
        head = head->next;
        while(head!=NULL){
            while(head->val!=0){
                sum+=head->val;
                head=head->next;
            }
            temp->next = new ListNode(sum);
            temp =temp->next;
            sum=0;
            head = head->next;
        }
        return res;
    }
};