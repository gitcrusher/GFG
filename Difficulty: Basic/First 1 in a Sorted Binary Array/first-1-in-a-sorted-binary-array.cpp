class Solution {
  public:
    int firstIndex(vector<int> &nums) {
        // Your code goes here
        int low = 0 ; 
        int high = nums.size();
        int x = 1, res = -1;
        while(low <=high){
            int mid = low +(high-low)/2;
            if(nums[mid]==x){
                res = mid ;
                high = mid-1;
            }else if(nums[mid]<=x){
                low=mid+1;
            }else{
                high = mid-1;
            }
        }
        return res;
        
    }
};