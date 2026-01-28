class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& s, vector<int>& e) {
        // Your code here
        vector<pair<int,int>>meetings;
        for(int i = 0 ; i < s.size();i++){
            meetings.push_back({e[i],s[i]});
        }
        
        
        sort(meetings.begin(),meetings.end());
        
        
        int count = 1;
        int lastend=meetings[0].first;
        for(int i = 0; i < s.size(); i ++){
            if(meetings[i].second>lastend){
                count++;
                lastend=meetings[i].first;
            }
        }
        return count;
    }
};