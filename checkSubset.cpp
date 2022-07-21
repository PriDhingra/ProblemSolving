#include<bits/stdc++.h>
bool checkSubset(vector < int > & arr1, vector < int > & arr2, int n, int m) {
    // Write your code here.
    unordered_map<int, int> um;
    
    for(int i = 0;i < arr1.size();i++) {
        um[arr1[i]]++;
    }
    
    for(int i = 0;i < arr2.size();i++) {
        if(um[arr2[i]] && um[arr2[i]] > 0)
            um[arr2[i]]--;
        else 
            return false;
    }
    
    return true;
}
