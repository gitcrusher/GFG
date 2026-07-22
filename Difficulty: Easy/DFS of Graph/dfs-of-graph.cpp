class Solution {
  public:
  
    void solve(vector<vector<int>>& adj, int src, vector<bool>& vis, vector<int>& ans){
        vis[src]=true;
        ans.push_back(src);
        for(int& v: adj[src]){
            if(!vis[v]) solve(adj, v, vis, ans);
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();
        vector<bool>vis(v,false);
        vector<int>ans;
        
        solve(adj, 0, vis, ans);
        return ans;
    }
};