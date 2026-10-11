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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //if(n==1) head=head->next;
        ListNode* f = head;
        int size = 1;
        while(f!= nullptr && f->next!= nullptr ){
            size++;
            f = f->next;
        }
        int dlt= size - n;
        if(dlt ==0) return head->next;
        int t = 0;
        f = head;
        while(t < dlt - 1){
            f = f->next;
            t++;
        }
        if(f->next != nullptr) {f->next = f->next->next;}
        else f->next = nullptr;
        return head;
    }
};


// revisit please, utna aasani se nai hua tha ye