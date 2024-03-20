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
        ListNode* ptr=list1;
        int i=0;
        while(i<a-1){
            ptr=ptr->next;i++;
        }
        ListNode* temp=ptr;
        ListNode* temp2=list2;
        while(list2->next!=nullptr){
            list2=list2->next;
        }
        while(i<b){
            ptr=ptr->next;i++;
        }
        list2->next=ptr->next;
        temp->next=temp2;
        return list1;
    }
};