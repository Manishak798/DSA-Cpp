class Solution {
public:
    void dfs(int node, vector<bool> &visit, vector<vector<int>>& isConnected){
        visit[node] = true;
        for(int i =0; i<isConnected.size(); i++){
            if(isConnected[node][i] && !visit[i]){
                dfs(i, visit, isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int countProvinces = 0;
        vector<bool> visit(n);

        for(int i=0; i<n; i++){
            if(!visit[i]){
                countProvinces++;
                dfs(i, visit, isConnected);
            }
        }
        return countProvinces;
    }
};