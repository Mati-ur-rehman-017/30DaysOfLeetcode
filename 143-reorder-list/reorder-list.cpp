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
    void reorderList(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return;
        }
       stack<int>s;
       queue<int>q;
       ListNode* slow=head;
       ListNode* fast=head->next;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow;
        while(slow->next){
            slow=slow->next;
            s.push(slow->val);
        }
        slow=head;
        while(slow!=temp){
            q.push(slow->val);
            slow=slow->next;
        }
        q.push(temp->val);
        bool check=true;
        temp=head;
        while(!q.empty()||!s.empty()){
            if(check){
                temp->val=q.front();
                q.pop();
            }else{
                temp->val=s.top();
                s.pop();
            }
            temp=temp->next;
            check=!check;
        }
        if(!q.empty()){
            temp->val=q.front();
        }
        return;
    }
};