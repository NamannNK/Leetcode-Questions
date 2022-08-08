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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0)return head;
        if(head==NULL)return NULL;
        vector<int>res;
        ListNode* temp=head;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp=temp->next;
        }
        k = k%res.size();
        temp=head;
        for(int i=res.size()-k;i<res.size();i++){
            temp->val=res[i];
            temp=temp->next;
        }
        
        for(int i=0;i<res.size()-k;i++){
            temp->val=res[i];
            temp=temp->next;
        }
        return head;
    }
};