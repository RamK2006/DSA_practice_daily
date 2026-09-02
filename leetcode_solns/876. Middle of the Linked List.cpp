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
    ListNode* middleNode(ListNode* head) {
        ListNode* kachua = head;
        ListNode* khargosh= head;
        while((khargosh != nullptr) && (khargosh -> next != nullptr)){
            kachua = kachua -> next;
            khargosh = khargosh -> next -> next;
        }
        return kachua;
    }
};

// lessgo 100% beats
