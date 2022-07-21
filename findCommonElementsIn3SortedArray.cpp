#include<bits/stdc++.h>
bool solve(vector<int> &arr, int start, int end, int target) {
    int mid = (start + end) / 2;
    
    while(start <= end) {
        if(arr[mid] == target)
            return true;
        else if(arr[mid] < target)
            start = mid + 1;
        else 
            end = mid - 1;
        
        mid = (start + end) / 2;
    }
    
    return false;
}

vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    // Write your code here
    vector<int> result;
    
    for(int i = 0;i < a.size();i++) {
        if(solve(b, 0, b.size() - 1, a[i]) && solve(c, 0, c.size() - 1, a[i])) {   
            if(result.size() == 0) {
                result.push_back(a[i]);
            } else if(result[result.size() - 1] != a[i]) {
                result.push_back(a[i]);
            }
        }
    }
    
//     for(auto i: temp)
//         result.push_back(i);
    
    return result;
}
