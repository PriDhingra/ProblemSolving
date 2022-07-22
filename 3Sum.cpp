#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> result;
    
    sort(arr.begin(), arr.end()); 
    
    for(int i = 0;i < n;i++) {
        int j = i + 1;
        int k = n - 1;
       
        while(j < k) {
                int threeSum = arr[i] + arr[j] + arr[k];
                if(threeSum == K) {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    result.push_back(temp);
                    int x = arr[j];
                    int y = arr[k];
                    
                    while(j < k && arr[j] == x)
                        j++;
                    while(j < k && arr[k] == y)
                        k--;
                    
                } else if(threeSum < K) 
                    j++;
                else
                    k--;
        }
         while(i + 1 < n && arr[i] == arr[i + 1])
             i++;
    }
    return result;
}
