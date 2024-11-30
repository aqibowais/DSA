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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* prev = new ListNode();
        prev->next = head;
        ListNode* curr = prev;
        while(curr != NULL && curr->next != NULL){
            ListNode* nextNode = curr->next;
            int sum = 0;
            while(nextNode!=NULL){
                sum+=nextNode->val;
                if(sum == 0){
                    curr->next = nextNode->next;
                }
                nextNode = nextNode->next;
            }
            curr = curr->next;
        }
        return prev->next;
    }
};