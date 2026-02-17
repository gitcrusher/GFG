/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        if(root == nullptr) return {};
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            Node* node = nullptr;
            while(n--){
                node = q.front();
                q.pop();
                
                if(node->right!=nullptr) q.push(node->right); 
                if(node->left!=nullptr) q.push(node->left); 
            }
            ans.push_back(node->data);
        }
        return ans;
        
        
    }
};