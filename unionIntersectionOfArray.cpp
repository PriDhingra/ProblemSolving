#include<bits/stdc++.h>
int unionn(vector<int> &a, vector<int> &b) {
    set<int> s;
    
    for(int i = 0;i < a.size();i++)
        s.insert(a[i]);
    
    for(int i = 0;i < b.size();i++)
        s.insert(b[i]);
    
    return s.size();
}

int intersection(vector<int> &a, vector<int> &b) {
    set<int> s;
    
    for(int i = 0;i < a.size();i++)
        s.insert(a[i]);
    
    int count = 0;
    for(int i = 0;i < b.size();i++) {
        if(s.find(b[i]) != s.end()) {
            count++;
            s.erase(b[i]);
        }
    }
    
    return count;
}

pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	// Write Your Code here.
    pair<int, int> p = make_pair(0, 0);
    p.first = intersection(arr1, arr2);
    p.second = unionn(arr1, arr2);
    return p;
}
