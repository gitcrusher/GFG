class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int>a;
        stack<int> st;
        for(int i = arr.size()-1; i >=0; i--){
            if(st.size()==0) a.push_back(-1);
            else if(st.size()>0 && st.top()>arr[i]){
                a.push_back(st.top());
            }else if(st.size()>0 && st.top()<=arr[i]){
                while(st.size()>0 && st.top()<=arr[i]){
                    st.pop();
                }
                if(st.size()==0) a.push_back(-1);
                else{
                    a.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        reverse(a.begin(), a.end());

        return a;
        
    }
};