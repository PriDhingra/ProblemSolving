int solve(vector<int> &a, int tar) {
    int low = 0;
    int high = a.size() - 1;
    while(low <= high) {
        int mid = (low + high) >> 1;
        if(a[mid] <= tar)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return low;
}
int findMedian(vector<vector<int> > &A, int n, int m){
	
	// Write your code here 
    int low = -1e9;
    int high = 1e9;
    
    while(low <= high) {
        int mid = (low + high) >> 1;
        int cnt = 0;
        for(int i = 0;i < n;i++) {
            cnt += solve(A[i], mid);
        }
        
        if(cnt <= (n * m) / 2)
            low = mid + 1;
        else
            high = mid - 1;
        
    }
    
    return low;
	
}
