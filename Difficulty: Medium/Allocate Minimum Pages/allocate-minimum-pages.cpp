class Solution {
  public:
    bool isValid(vector<int > &arr,int n , int k , int mx){
        int st = 1;
        int sum1 = 0;
        for(int i = 0 ; i < n ; i ++){
            sum1 +=arr[i];
            
            if(sum1 > mx){
                st++;
                sum1=arr[i];
            }
            if(st>k){
                return false;
            }
        }
        return true;
    }
    
  
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k>n)return -1;
        
        int a = arr[0];
        for(int i =1; i <n; i++){
            a = max(a,arr[i]);
        }
        
        
        int sum = 0 ;
        for(int i = 0 ; i <n; i++){
            sum +=arr[i];
        }
        
        int low =a; 
        int high = sum;
        int result = 0 ; 
        
        while(low<=high){
            int mid = low + (high - low )/2;
            if(isValid(arr,n,k,mid)==true){
                result = mid;
                high = mid -1;
            }else{
                low =mid +1;
            }
        }
        return result;
    }
};