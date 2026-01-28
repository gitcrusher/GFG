class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int l = 0 ; 
        int r = arr.size()-1;
        
        while(r>l){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }
};