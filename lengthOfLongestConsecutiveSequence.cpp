#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    
    int count = 0;
    int ans = 0;
    for(int i = 0;i < n - 1;i++) {
        if(arr[i + 1] - arr[i] == 1)
            count++;
        else if(arr[i + 1] - arr[i] != 0)
            count = 0;
        
        ans = max(ans, count);
    }
    return ans + 1;
}
