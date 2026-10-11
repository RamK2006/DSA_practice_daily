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
    bool isPalindrome(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast!= nullptr && fast->next!= nullptr){
            slow = slow->next;
            fast= fast->next->next;
        }
        ListNode* prev= nullptr;
        ListNode* curr=slow;
        ListNode* nxt=slow;
        while(curr!=nullptr){
            nxt= curr->next;
            curr-> next= prev;
            prev= curr;
            curr=nxt;
        }
        fast= head;
        while(prev!= nullptr){
            if(prev->val != fast->val) return false;
            prev= prev->next;
            fast= fast->next;
        }
        return true;
    }
};

//yes i took help, pointers move krne me problem hori thi