class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int window = 0;
        int n = arr.size();
        for(int i = 0 ; i < k ; i++){
            window+=arr[i];
        }
        int maxsum=window;
        
        for(int i = k ; i < n ; i++){
            window+=arr[i];
            window-=arr[i-k];
            maxsum = max(maxsum,window);
        }
        return maxsum;
    }
};