class Solution {
  public:
    int findFloor(vector<int>& nums, int x) {
        // code here
        int low = 0;
        int res = -1;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]<=x){
                res = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return res;
    }
};
