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
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge2LL(ListNode* leftHead, ListNode* rightHead){
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* t1 = leftHead;
        ListNode* t2 = rightHead;
        while(t1 && t2){
            if(t1->val < t2->val){
                temp->next = t1;
                temp = t1;
                t1 = t1->next;
            }
            else{
                temp->next = t2;
                temp = t2;
                t2 = t2->next;
            }
        }
        if(t1) temp->next = t1;
        if(t2) temp->next = t2;
        
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* middle = findMiddle(head);
        ListNode* leftHead = head;
        ListNode* rightHead = middle->next;
        middle->next = nullptr;
        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);
        return merge2LL(leftHead,rightHead);
    }
};