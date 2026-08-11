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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* start=head;
        ListNode* end=head;
        for(int i=1;i<k;i++){
            start=start->next;
        }

        ListNode* temp=start;
        while(temp->next!=nullptr){
            temp=temp->next;
            end=end->next;
        }
        swap(start->val,end->val);
        return head;
    }
};