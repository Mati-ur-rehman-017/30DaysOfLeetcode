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
        ListNode* temp=head;
        ListNode* temp2=head;
        ListNode* temp3;
        
        while(n>0){
            temp=temp->next;n--;
        }
        if(temp==nullptr){
            head=head->next;
            return head;
        }
        temp2=head;
        while(temp->next!=nullptr){
            temp=temp->next;
            temp2=temp2->next;
        }
        temp3=temp2->next;
        temp2->next=temp2->next->next;
        delete temp3;
        return head;
    }
};