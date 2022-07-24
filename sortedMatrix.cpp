#include<bits/stdc++.h>
vector<int> sortedMatrix(vector<vector<int>> &mat, int n) {
    // Write your code here.
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> result(n * n);
    
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) 
            pq.push(mat[i][j]);
    }
    
    int x = 0;
    while(!pq.empty()) {
        result[x++] = pq.top();
        pq.pop();
    }
        
    return result;
}
