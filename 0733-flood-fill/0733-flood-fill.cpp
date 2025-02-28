class Solution {
public:
    void dfs(int row, int col, int newColor, vector<vector<int>>& image, vector<vector<int>>& ans, vector<int> delRow, vector<int> delCol, int initColor, int n, int m){
        ans[row][col] = newColor;
        for(int i=0; i<4; i++){
            int nrow = row+delRow[i];
            int ncol = col+delCol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == initColor && ans[nrow][ncol] != newColor){
                dfs(nrow, ncol, newColor, image, ans, delRow, delCol, initColor, n, m);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> ans = image;
        vector<int> delRow = {-1, 0, +1, 0};
        vector<int> delCol = {0, +1, 0, -1};
        int initColor = image[sr][sc];
        dfs(sr, sc, color, image, ans, delRow, delCol, initColor, n, m);
        return ans;
    }
};