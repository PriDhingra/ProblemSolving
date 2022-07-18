#include <bits/stdc++.h> 
long long maxSubarraySum(int a[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    
    int sum = 0;
    int maxi = a[0];
    
    for(int i = 0;i < n;i++) {
        sum += a[i];
        maxi = max(maxi, sum);
        
        if(sum < 0)
            sum = 0;
    }
    
    if(maxi < 0)
        return 0;
    
    return maxi;
}
