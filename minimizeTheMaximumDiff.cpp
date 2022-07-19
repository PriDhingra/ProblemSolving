int minimizeIt(vector<int> A, int k)
{
	// Write your code here.
    int n = A.size();
    if(n == 1)
        return 0;
    
    sort(A.begin(), A.end());
    
//     int n = A.size();
    int diff = A[n - 1] - A[0];
    
    int mini;
    int maxi;
    
    for(int i = 1;i < n;i++) {
        if(A[i] - k < 0)
            continue;
        
        maxi = max(A[i - 1] + k, A[n - 1] - k);
        mini = min(A[0] + k, A[i] - k);
        
        diff = min(diff, maxi - mini);
    }
    
    return diff;
}
