class Solution {
public:
    void dfs(int r, int c, int rows, int cols, vector<vector<char>>& grid, 
            vector<vector<int>>& visited) {
        
        if(r < 0 || r == rows || c < 0 || c == cols || grid[r][c] == '0' || visited[r][c] == 1)
            return;
        
        visited[r][c] = 1;
        
        dfs(r + 1, c, rows, cols, grid, visited); 
        dfs(r - 1, c, rows, cols, grid, visited);
        dfs(r, c + 1, rows, cols, grid, visited);
        dfs(r, c - 1, rows, cols, grid, visited);
        
        return;
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        
        for(int r = 0;r < rows;r++) {
            for(int c = 0;c < cols;c++) {
                if(visited[r][c] == 0 && grid[r][c] == '1') {
                    ans += 1;
                    dfs(r, c, rows, cols, grid, visited);
                }
            }
        }
        
        return ans;
    }
};
