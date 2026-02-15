class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& st) {
        // code here..
        stack<int> dst;
        int mid =(st.size()/2)+1;
        int count =1;
        
        while(!st.empty()){
            int top = st.top();
            st.pop();
            if(count!=mid){
                dst.push(top);
            }
            count++;
        }
        
        while(!dst.empty()){
            st.push(dst.top());
            dst.pop();
        }
    }
};