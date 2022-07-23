#include<bits/stdc++.h>
vector<int> findCommonElements(vector<vector<int>> &mat)
{
    // Write your code here
    vector<int> result;
    unordered_map<int, int> um;
    int n = mat.size();
    int m = mat[0].size();
    
    for(int i = 0; i < n;i++) {
        sort(mat[i].begin(), mat[i].end());
        
        mat[i].push_back(-1);
        
        for(int j = 0; j < m; j++) {
            if(mat[i][j] != mat[i][j + 1])
                um[mat[i][j]]++;
        }
    }
    
    for(auto i: um) {
        if(i.second == n)
            result.push_back(i.first);
    }
    
    return result;
}
