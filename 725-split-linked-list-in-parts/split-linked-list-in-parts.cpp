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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>heads(k,nullptr);
        if(k==1){
            heads[0]=head;
            return heads;
        }
        ListNode*temp=head;
        int n=0;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }
        int count=n/k;
        int count2;
        int extra=n%k;
        temp=head;
        int i=0;
        heads[0]=temp;
        ListNode*temp2;
        while(temp){
            count2=count-1;
            extra?count2++:count2;
            while(count2>0){
                count2--;
                if(temp){
                    temp=temp->next;
                }else{
                    return heads;
                }
            }
            if(!temp){
                return heads;
            }
            extra?extra--:extra;
            temp2=temp->next;
            temp->next=nullptr;
            i++;
            if(!(i<k)){return heads;}
            heads[i]=temp2;
            temp=temp2;
        }
        return heads;
    }
};