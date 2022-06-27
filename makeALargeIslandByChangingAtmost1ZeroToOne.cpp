class Solution {
public:
    int dfs(int id, int r, int c, int rows, int cols, vector<vector<int>>& grid, vector<vector<int>> &visited) {
        if(r < 0 || r == rows || c < 0 || c == cols || grid[r][c] == 0 || visited[r][c] == 1)
            return 0;
        
        visited[r][c] = 1;
        grid[r][c] = id;
        
        return (1 + dfs(id, r + 1, c, rows, cols, grid, visited) + 
                   dfs(id, r - 1, c, rows, cols, grid, visited) +
                   dfs(id, r, c + 1, rows, cols, grid, visited) + 
                   dfs(id, r, c - 1, rows, cols, grid, visited));
    }
    
    int largestIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int id = 2;
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        int maxi = INT_MIN;
        unordered_map<int, int> map;
        
        for(int r = 0;r < rows;r++) {
            for(int c = 0;c < cols;c++) {
                if(visited[r][c] == 0 && grid[r][c] == 1) {
                    int ans = dfs(id, r, c, rows, cols, grid, visited);
                    map[id] = ans;
                    id += 1;
                    maxi = max(maxi, ans);
                }
            }
        }
        
        for(int r = 0;r < rows;r++) {
            for(int c = 0;c < cols;c++) {
                if(grid[r][c] == 0) {
                    int temp = 1;
                    set<int> st;
                    
                    if(r - 1 >= 0)
                        st.insert(grid[r - 1][c]);
                    
                    if(r + 1 < rows)
                        st.insert(grid[r + 1][c]);
                    
                    if(c - 1 >= 0)
                        st.insert(grid[r][c - 1]);
                    
                    if(c + 1 < cols)
                        st.insert(grid[r][c + 1]);
                    
                    for(auto i: st) 
                        temp += map[i];
                    
                    maxi = max(maxi, temp);
                }
            }
        }
        
        return maxi;
    }
};
