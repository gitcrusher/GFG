/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here recurssive approach 
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        while(curr!=nullptr){
            next = curr->next;//value of next of current into next pointer
            curr->next = prev;// link which is to be directed reverse
            prev = curr;
            curr=next;
        }
        return prev;
    }
};