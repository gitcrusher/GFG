class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int l = 0, r = 0 ; 
        int maxi = -1;
        unordered_map<char, int>mp;
        while(r<s.length()){
            mp[s[r]]++;
            if(mp.size()<k){
                r++;
            }else if(mp.size()==k){
                maxi = max(maxi, (r-l+1));
                r++;
            }else if(mp.size()>k){
                while(mp.size()>k){
                    mp[s[l]]--;
                    if(mp[s[l]]==0){
                        mp.erase(s[l]);
                    }
                    l++;
                }
                r++;
            }
        }
        return maxi;
    }
};