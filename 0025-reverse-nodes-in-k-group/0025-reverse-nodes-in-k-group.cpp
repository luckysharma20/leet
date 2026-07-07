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
    
    ListNode *reverseKgroup(ListNode *head, int k) {
        // code here
        if (head==nullptr) return head;
        ListNode* temp=head;
        ListNode* newnode=nullptr;
        ListNode* tail=nullptr;
        while(temp!=nullptr){
            ListNode* check=temp;
            int len=0;
            while(check!=nullptr && len<k){
                check=check->next;
                len++;
            }
            if(len<k){
                if(tail!=NULL) tail->next=temp;
                if (newnode==NULL) newnode=temp;
                break;
            }
            ListNode* t=temp;
            ListNode* prev=nullptr;
            ListNode* nextnode=NULL;
            int count=0;
            while(temp!=NULL && count<k){
                nextnode=temp->next;
                temp->next=prev;
                prev=temp;
                temp=nextnode;
                count++;
            }
            if (newnode==nullptr) newnode=prev;
            if (tail!=nullptr){
                tail->next=prev;
            }
            tail=t;
        }
        return newnode;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseKgroup(head,k);
    }
};