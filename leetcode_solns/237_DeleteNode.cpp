/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
        while(temp-> next -> next != nullptr){
            temp-> val = temp -> next -> val;
            temp = temp -> next;
        }
        temp-> val = temp -> next -> val;
        temp-> next = nullptr;


        //temp-> next = nullptr;
    }
};

// doesn't have 100% beats 

// trying to optimize->>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
        temp-> val = temp -> next -> val;
        temp-> next = temp-> next -> next;
    }
};

// lessgoooo, but still not 100% beats

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node-> val = node -> next -> val;
        node-> next = node-> next -> next;
    }
};

// maybe better space but idts anything extra can be done on this