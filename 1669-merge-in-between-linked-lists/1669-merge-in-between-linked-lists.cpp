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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* a_node;
        ListNode* b_node;
        int i=1;
        while(temp!=NULL){
            if(i == a){
                a_node = temp;
            }
            if(i==b+2)b_node = temp;
            temp = temp->next;
            i++;
        }
        temp = list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        a_node->next = list2;
        temp->next = b_node;
        return list1;
    }
};