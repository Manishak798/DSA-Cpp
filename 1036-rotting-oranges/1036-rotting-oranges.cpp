class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visit(n, vector<int>(m, 0)); 
        queue<pair<pair<int,int>, int>> q;
        int cntFresh = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    visit[i][j] = 2;
                }
                if(grid[i][j] == 1)cntFresh++;
            }
        }
        int tm = 0;
        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};
        int cnt = 0;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;
            tm = max(tm, time);
            q.pop();
            //visit neighbor
            for(int i=0; i<4; i++){
                int nrow = row+drow[i];
                int ncol = col+dcol[i];
                if(nrow>=0 && nrow < n && ncol>=0 && ncol < m && visit[nrow][ncol] != 2 && grid[nrow][ncol] == 1){
                    q.push({{nrow, ncol}, time+1});
                    visit[nrow][ncol] = 2;
                    cnt++;
                }
            }
        }
        return (cnt == cntFresh) ? tm : -1;
    }
};