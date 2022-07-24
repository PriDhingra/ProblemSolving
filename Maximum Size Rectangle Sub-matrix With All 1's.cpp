#include<bits/stdc++.h>

vector<int> nextSmallest(vector<int> &input) {
    vector<int> result(input.size());
    
    stack<int> s;
    s.push(-1);
    
    for(int i = input.size() - 1;i >= 0;i--) {
        
        while(s.top() != -1 && input[s.top()] >= input[i]) 
            s.pop();
        
        result[i] = s.top();
        s.push(i);
    }
    
    return result;
}

vector<int> prevSmallest(vector<int> &input) {
    vector<int> result(input.size());
    
    stack<int> s;
    s.push(-1);
    
    for(int i = 0;i < input.size();i++) {
        
        while(s.top() != -1 && input[s.top()] >= input[i]) 
            s.pop();
        
        result[i] = s.top();
        s.push(i);
    }
    
    return result;
}

int largestRectangle(vector<int> &input) {
    int n = input.size();
    
    vector<int> next(n);
    next = nextSmallest(input);
    
    vector<int> prev(n);
    prev = prevSmallest(input);
    
    int area = -1e8;
    
    for(int i = 0;i < n;i++) {
        int l = input[i];
        
        if(next[i] == -1)
            next[i] = n;
        
        int b = next[i] - prev[i] - 1;
        
        area = max(area, l * b);
    }
    
    return area;
}

int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m){
	// Write your code here.
    int area = largestRectangle(mat[0]);
    
    for(int i = 1;i < n;i++) {          
            for(int j = 0;j < m;j++) {
               if(mat[i][j] != 0)
                    mat[i][j] += mat[i - 1][j];
            } 
        area = max(area, largestRectangle(mat[i]));
    }
    
    return area;
}
