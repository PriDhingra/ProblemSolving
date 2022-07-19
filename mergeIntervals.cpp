#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
// bool compare(vector<int> &a, vect)

vector<vector<int>> mergeIntervals(vector<vector<int>> &in)
{
    // Write your code here.
    vector<vector<int>> result;
    sort(in.begin(), in.end());
    
    result.push_back(in[0]);
    
    for(int i = 1;i < in.size();i++) {
        if(result.back()[1] >= in[i][0])
            result.back()[1] = max(result.back()[1], in[i][1]);
        else
            result.push_back(in[i]);
    }    
    
    return result;
}
