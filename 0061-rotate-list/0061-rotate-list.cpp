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
        if(!head || !head->next || k==0)return head;
        int length = 0;
        ListNode* temp = head;
        while(temp->next){
            length++;
            temp = temp->next;
        }
        length++;
        temp->next = head;
        k = k % length;
        temp = head;
        for(int i=1; i<length-k;i++){
            temp = temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next = nullptr;
        return newHead;
    }
};