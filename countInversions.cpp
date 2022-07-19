#include <bits/stdc++.h> 
void merge(long long *arr, long long start, long long mid, long long end, long long &res) {
    long long n1 = mid - start + 1;
    long long n2 = end - mid;
    
    long long left[n1];
    long long right[n2];
    
    for(long long i = 0;i < n1;i++)
        left[i] = arr[start + i];
    
    for(long long i = 0;i < n2;i++)
        right[i] = arr[mid + i + 1];
    
    int i = 0,j = 0,k = start;
    while(i < n1 && j < n2) {
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else {
            arr[k++] = right[j++];
            res += (n1 - i);
        }
    }
    
    while(i < n1)
        arr[k++] = left[i++];
    
    while(j < n2)
        arr[k++] = right[j++];
}

void mergeSort(long long *arr, long long start, long long end, long long &res) {
    if(start >= end)
        return;
    
    long long mid= (start + end) / 2;
    
    mergeSort(arr, start, mid, res);
    mergeSort(arr, mid + 1, end, res);
    merge(arr, start, mid, end, res);
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long res = 0;
    mergeSort(arr, 0, n - 1, res);
    return res;
}
