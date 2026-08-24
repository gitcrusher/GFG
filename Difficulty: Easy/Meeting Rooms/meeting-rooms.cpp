class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        
        sort(begin(arr),end(arr));
        for(int i = 1 ; i < arr.size(); i++){
            if(arr[i][0]<arr[i-1][1])return false;
        }
        return true;
    /*
    {
        {1,4},
        {7,10},
        {10,15},
    }
    */
        
    }
};