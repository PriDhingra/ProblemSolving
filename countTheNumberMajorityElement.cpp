#include<bits/stdc++.h>
vector<int> countTheNumber(vector<int> &arr, int n, int k) {
	// Write your code here.
    unordered_map<int, int> um;
    
    for(int i = 0;i < arr.size();i++) {
        um[arr[i]]++;
    }
    
    vector<int> result;
    
    for(auto i: um) {
        if(i.second >= n/k)
            result.push_back(i.first);
    }
    
    return result;
}
