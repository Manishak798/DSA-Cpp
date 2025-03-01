class Solution {
public:
    void bfs(int n, int m, int row, int col, vector<vector<int>> &visited, vector<vector<char>>& grid){
        queue<pair<int,int>> q;
        q.push({row,col});
        visited[row][col] = 1;
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            int dRow[] = {-1, 1, 0, 0}; 
            int dCol[] = {0, 0, -1, 1}; 
            /*travel in all 8 directions --- -1 to +1*/
            // for(int delRow = -1; delRow<=1; delRow++){
            //     for(int delCol = -1; delCol<=1; delCol++){
            //         int nrow = r+delRow;
            //         int ncol = c+delCol;
            //         if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !visited[nrow][ncol]){
            //             visited[nrow][ncol] = 1;
            //             q.push({nrow, ncol});
            //         }
            //     }
            // }
            for(int i = 0; i < 4; i++){  // Only 4 directions
                int nrow = r + dRow[i];
                int ncol = c + dCol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !visited[nrow][ncol]){
                    visited[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for(int row=0; row<n; row++){
            for(int col=0; col<m; col++){
                if(grid[row][col] == '1' && !visited[row][col]){
                    count++;
                    bfs(n, m,row, col, visited, grid);
                }
            }
        }
        return count;
    }
};