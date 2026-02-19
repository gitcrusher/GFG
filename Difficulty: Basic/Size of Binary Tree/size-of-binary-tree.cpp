/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  int count = 0 ;
    int getSize(Node* root) {
        // code here
        
        if(root==NULL) return 0;
        count++;
        getSize(root->left);
        getSize(root->right);
        return count;
        
    }
};