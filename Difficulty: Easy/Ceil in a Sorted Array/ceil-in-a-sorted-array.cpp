// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& nums, int x) {
        // code here
        int low = 0 ; 
        int high = nums.size()-1;
        int res = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>=x){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
};