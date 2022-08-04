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
        if(list1 == NULL && list2 ==NULL)return NULL;
        if(list1 == NULL)return list2;
        if(list2 == NULL)return list1;
        priority_queue<int,vector<int>,greater<int>>pq;
        ListNode* temp=list1;
        while(temp!=NULL){
            pq.push(temp->val);
            temp = temp->next;
        }
        while(list2!=NULL){
            pq.push(list2->val);
            list2 = list2->next;
        }
        ListNode* res = new ListNode(pq.top());
        pq.pop();
        ListNode* a = res;
        while(pq.empty() == false){
            res->next = new ListNode(pq.top());
            res = res->next;
            pq.pop();
        }
        return a;
    }
};