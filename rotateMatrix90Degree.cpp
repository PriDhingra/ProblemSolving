#include<bits/stdc++.h>

void inplaceRotate(vector<vector<int>> &arr)
{
    // Write your code here.
    int n = arr.size();
    
    for(int i = 0;i < n;i++) {
        reverse(arr[i].begin(), arr[i].end());
    }
    
    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            if(i != j)
                swap(arr[i][j], arr[j][i]);
        }
    }
}
