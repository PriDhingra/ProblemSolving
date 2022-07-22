#include<bits/stdc++.h>
int minSubArrayLen(vector<int>& arr, int target, int n) {
    // Write your code here.
    int sum = 0;
    int j = 0;
    int result = INT_MAX;
    
    for(int i = 0;i < n;i++) {
        sum += arr[i];
        if(sum > target) {
            result = min(result, i - j + 1);
            while(sum > target) {
                sum = sum - arr[j++];
                if(sum > target)
                    result = min(result, i - j + 1);
            }
        }
    }
    
    if(result == INT_MAX)
        return 0;
    
    return result;
}
