class Solution {
  public:
    bool isvalid(vector<int> &stalls, int mid,int k){
      int count =1;
      int pos = stalls[0];
      for(int i = 0 ; i < stalls.size(); i++){
          if(stalls[i]-pos>=mid){
              count++;
              pos = stalls[i];
          }
      }
      
      if(count>=k)return true;
      else return false;
    }
  
  
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int low = 0 ; 
        int high = stalls[n-1]-stalls[0];
        int ans =0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isvalid(stalls,mid,k)==true){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
};