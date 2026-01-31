class Solution {
  public:
    int first(vector<int>& nums, int x){
        int low = 0 , high = nums.size()-1;
        int result = -1;
        while(low <=high ){
            int mid = low +(high -low)/2;
            if(nums[mid]==x){
                result = mid;
                high = mid -1;
            }else if(nums[mid]< x){
                low = mid+1;
            }else{
                high = mid -1;
            }
        }
        return result;    
    }
    
    int last(vector<int>& nums, int x){
        int low = 0 , high = nums.size()-1;
        int result = -1;
        while(low <=high ){
            int mid = low +(high -low)/2;
            if(nums[mid]==x){
                result = mid;
                low = mid +1;
            }else if(nums[mid]< x){
                low = mid+1;
            }else{
                high = mid -1;
            }
        }
        return result;    
    }
    
    
    int countFreq(vector<int>& arr, int target) {
        // code here
        int f = first(arr, target);
        int l = last(arr,target);
        int occurance;
        if(f==-1&&l==-1){
            return 0;
        }else{
            occurance = l-f+1;
        }
        return occurance;
    }
};
