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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL)return NULL;
        if(list1 == NULL)return list2;
        if(list2 == NULL)return list1;
        ListNode* res;
        if(list1->val>list2->val){
            res = new ListNode(list2->val);
            list2 = list2->next;
        }
        else{
            res = new ListNode(list1->val);
            list1 = list1->next;
        }
        ListNode* temp = res;
        while(list1!=NULL && list2 !=NULL){
            if(list1 == NULL){
                while(list2!=NULL){
                    temp->next = new ListNode(list2->val);
                    temp = temp->next;
                    list2 = list2->next;
                }
            }
            if(list2 == NULL){
                while(list1!=NULL){
                    temp->next = new ListNode(list1->val);
                    temp = temp->next;
                    list1 = list1->next;
                }
            }
            if(list1->val>list2->val){
                temp->next = new ListNode(list2->val);
                list2 = list2->next;
                temp = temp->next;
            }
            else{
                temp->next = new ListNode(list1->val);
                list1 = list1->next;
                temp = temp->next;
            }
        }
        if(list1!=NULL)temp->next = list1;
        if(list2!=NULL)temp->next = list2;
        return res;
    }
};