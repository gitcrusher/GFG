class Solution {
  public:
    int first(vector<int>& arr, int x){
        int low = 0, result =-1 ; 
        int high = arr.size();
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==x){
                result = mid;
                high = mid-1;
            }else if(arr[mid]<x){
                low = mid +1;
            }else{
                high = mid-1;
            }
        }
        return result;
    }
    
    
    int last(vector<int>& arr, int x){
        int low = 0, result =-1 ; 
        int high = arr.size();
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==x){
                result = mid;
                low = mid+1;
            }else if(arr[mid]<x){
                low = mid +1;
            }else{
                high = mid-1;
            }
        }
        return result;
    }
    
    vector<int> find(vector<int>& arr, int x) {
        // code here
        return{first(arr,x),last(arr,x)};
    }
};