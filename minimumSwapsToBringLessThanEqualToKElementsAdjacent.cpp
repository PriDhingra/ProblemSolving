int minimumSwaps(vector<int> &arr, int n, int k)
{
	// Write your code here
    int count = 0;
    
    for(int i = 0;i < n;i++) {
        if(arr[i] <= k)
            count++;
    }
    
    int bad = 0;
    
    for(int i = 0;i < count;i++) {
        if(arr[i] > k)
            bad++;
    }
    
    int ans = bad;
    
    int j = count;
    
    while(j < n) {
        if(arr[j] > k)
            bad++;
        
        if(arr[j - (count)] > k)
            bad--;
        
        ans = min(ans, bad);
        j++;
    }
    
    return ans;
}
