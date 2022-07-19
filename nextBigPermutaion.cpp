#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int chgIdx = -1;
    
    for(int i = n - 2;i >= 0;i--) {
        if(p[i] < p[i + 1]) {
            chgIdx = i;
            break;
        }
    }
    
    if(chgIdx == -1) {
        sort(p.begin(), p.end());
        return p;
    }
    
    int nextBigInteger = 0;
    
    for(int i = chgIdx + 1;i < n;i++) {
        if(p[i] > p[chgIdx])
            nextBigInteger = i;
    }
    
    swap(p[nextBigInteger], p[chgIdx]);
    sort(p.begin() + chgIdx + 1, p.end());
    return p;
}
