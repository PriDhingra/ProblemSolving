#include<bits/stdc++.h>
int kMinFloor(vector<vector<int>> &s, int n, int k) {
	// Write your code here.
    priority_queue<int> pq;
    
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            pq.push(s[i][j]);
            
            if(pq.size() > k) 
                pq.pop();
        }
    }
    
    return pq.top();
}
