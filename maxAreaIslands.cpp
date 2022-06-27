class Solution {

public:
    int dfs(int r, int c, int rows, int cols, vector<vector<int>>& grid, vector<vector<int>> &visited) {
        if(r < 0 || r == rows || c < 0 || c == cols || grid[r][c] == 0 || visited[r][c] == 1)
            return 0;
        
        visited[r][c] = 1;
        return (1 + dfs(r + 1, c, rows, cols, grid, visited) + 
                   dfs(r - 1, c, rows, cols, grid, visited) +
                   dfs(r, c + 1, rows, cols, grid, visited) + 
                   dfs(r, c - 1, rows, cols, grid, visited));
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        
        for(int r = 0;r < rows;r++) {
            for(int c = 0; c< cols;c++) {
                area = max(area, dfs(r, c, rows, cols, grid, visited));
            }
        }
        
        return area;
    }
};
