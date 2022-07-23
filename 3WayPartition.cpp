#include<bits/stdc++.h>
vector<int> threeWayPartition(vector<int> &arr, int n, int a, int b)
{
    // Write your code here
    int i = 0;
    int j = 0;
    int k = n - 1;
    
    while(j < k) {
        if(arr[j] > b) 
            swap(arr[j++], arr[k--]);
        else if(arr[j] < a)
            swap(arr[i++], arr[j++]);
        else
            j++;
        
    }
    
    return arr;
}
