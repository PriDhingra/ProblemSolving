#include<bits/stdc++.h>
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
    
//     sort(arr.begin(), arr.end());
    
    int count = 0;
    int i = 0;
    int j = n - 1;
    
    while(i < j) {
        if(arr[i] + arr[j] == target) {
            count++;
            i++;
            j--;
        } else if(arr[i] + arr[j] < target) 
            i++;
        else
            j--;
    }
    if(count == 0)
        return -1;
    
    return count;
//     unordered_map<int, bool> mp;
    
//     for(int i = 0;i < n;i++) 
//         mp[arr[i]] = true;
    
//     int count = 0;
//     for(int i = 0;i < n;i++) {
//         if(target - arr[i] == arr[i])
//             continue;
        
//         if(mp[target - arr[i]])
//             count++;
//     }
    
//     if(count == 0)
//         return -1;
    
//     return count / 2;
}
