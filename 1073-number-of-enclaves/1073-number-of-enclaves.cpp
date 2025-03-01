class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
       int n = grid.size();
       int m = grid[0].size();
       queue<pair<int,int>> q;
       vector<vector<int>> visited(n, vector<int>(m,0));
       for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 || j==0 || i==n-1 || j==m-1){
                if(grid[i][j] == 1){
                    q.push({i,j});
                    visited[i][j] = 1;
                }
            }
        }
       }
       vector<int> delRow = {-1, 0, +1, 0};
       vector<int> delCol = {0, +1, 0, -1};
       while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nrow = row+delRow[i];
            int ncol = col+delCol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && visited[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                q.push({nrow, ncol});
                visited[nrow][ncol] = 1;
            }
        }
       }
       int count = 0;
       for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 1 && visited[i][j] == 0){
                count++;
            }
        }
       }
        return count;
    }
};