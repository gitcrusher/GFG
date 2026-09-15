class Solution {
  public:
    
    bool pallendrome(string& s, int left, int right){
        if(left>=right) return true;
        if(s[left]!=s[right])return false;
        return pallendrome(s,left+1, right-1);
    }
  
    bool isPalindrome(string& s) {
        // code here
        return pallendrome(s,0,s.size()-1);
        
    }
};