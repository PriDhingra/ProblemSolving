#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    vector<long> leftMax(n, 0);
    vector<long> rightMax(n, 0);
    
    long lm = arr[0];
    long rm = arr[n - 1];
    
//     leftMax[0] = arr[0];
//     rightMax[n - 1] = arr
    
    for(int i = 1;i < n;i++) {
        leftMax[i] = lm;
        lm = max(lm, arr[i]);
    }
    
    for(int i = n - 2;i >= 0;i--) {
        rightMax[i] = rm;
        rm = max(rm, arr[i]);
    }
    
    long result = 0;
    
    for(int i = 0;i < n;i++) {
        if(min(leftMax[i], rightMax[i]) - arr[i] >= 0)
            result += (min(leftMax[i], rightMax[i]) - arr[i]);
    }
    
    return result;
}
