// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& nums, int target) {
        // code here
        int low = 0 ;
        int high = nums.size()-1;
        int n = nums.size();
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                return mid;
            }if (mid-1>=low && nums[mid-1]==target){
                return mid -1;
            }if(mid+1<=high && nums[mid+1]==target){
                return mid+1;
            }
            
            if (target<nums[mid]){
                high = mid-2;
            }else{
                low = mid+2;
            }
        }
        return -1;
    }
};