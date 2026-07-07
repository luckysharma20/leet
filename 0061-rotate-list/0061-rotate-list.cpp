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
        if (head==nullptr||k==0) return head;
        ListNode* temp=head;
        int len=1;
        while(temp->next!=nullptr){
            len++;
            temp=temp->next;
        }
        k=k%len;
        if (k==0) return head;
        k=len-k;
        temp->next=head;
        temp=head;
        for (int i=1;i<k;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;
    }
};