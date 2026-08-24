class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        
        // 1,7,10
        //4,10,15
        
        //2,6,9 // start
        //4,10,12 //end
        int l = 0;
        int r = 0; 
        int room = 0;
        int ans = 0;
        

        while(r<start.size()){
            if(start[r]<end[l]){
                room++;
                ans = max(ans, room);
                r++;
            }
            else{
                room--;
                l++;
            }
        }
        return ans;
    }
};
