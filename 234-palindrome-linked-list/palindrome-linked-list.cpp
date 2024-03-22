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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr){return false;}
        if(head->next==nullptr){return true;}
        vector<int> a;
        a.push_back(head->val);
        ListNode*p=head;
        while(p->next!=nullptr){
            a.push_back(p->next->val);
            p=p->next;
        }
        for(int i=0,j=a.size();i<=j/2;i++){
            if(a[i]!=a[j-i-1]){
                return false;
            }
        }
        return true;
    }
};