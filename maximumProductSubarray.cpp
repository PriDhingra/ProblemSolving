#include<bits/stdc++.h>
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
    int res = *max_element(arr.begin(), arr.end());
//     cout<<res<<endl;
    int maxi = 1;
    int mini = 1;
    
    for(int i = 0;i < arr.size();i++) {
        if(arr[i] == 0) {
            maxi = 1;
            mini = 1;
            continue;
        } 
        
        int temp = arr[i] * maxi;\
        maxi = max(arr[i], max(temp, arr[i] * mini));
        mini = min(arr[i], min(temp, arr[i] * mini));
        res = max(res, maxi);
    }
    return res;
}
