/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node * prev = nullptr;
        Node * curr= head;
        Node * nextNode = nullptr;
        while(curr != nullptr){
            nextNode = curr->next;// aage badhne ka intejam hua idhr
            curr->next= prev;// kyuki hum reverse krre hai to aage jate jate pichle ko point kara diya
            prev= curr;// prev ko aage bdhaya
            curr= nextNode;// curr ko aage bdha diya
        }
        return prev;
    }
};
// in place hua, and best ig 
// we can also do it using recursion