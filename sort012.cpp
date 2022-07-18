#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int i = 0;
    int j = 0;
    int k = n - 1;
    
    while(i <= k) {
        if(arr[i] == 0) {
            swap(arr[i], arr[j]);
            i++;
            j++;
        } else if(arr[i] == 2) {
            swap(arr[i], arr[k]);
            k--;
        } else {
            i++;
        }
    }
}
