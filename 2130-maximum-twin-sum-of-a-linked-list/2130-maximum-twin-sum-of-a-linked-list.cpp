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
    int pairSum(ListNode* head) {
        vector<int>res;
        while(head!=NULL){
            res.push_back(head->val);
            head= head->next;
        }
        int low=0;
        int high = res.size()-1;
        int ans=INT_MIN;
        while(low<high){
            ans = max(ans,res[low++]+res[high--]);
        }
        return ans;
    }
};