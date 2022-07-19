#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	set<int> s;
    for(int i = 0;i < arr.size();i++) {
        if(s.find(arr[i]) != s.end())
            return arr[i];
        
        s.insert(arr[i]);
    }
    
    return 0;
}
