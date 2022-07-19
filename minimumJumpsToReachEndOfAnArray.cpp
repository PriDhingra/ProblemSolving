//Greedy Approach

int minimumJumps(vector<int> &arr, int n)
{
    // write your code here
    int res = 0;
    int l = 0;
    int r = 0;
    
    while(r < n - 1) {
        int farthest = 0;
        for(int i = l;i <= r;i++) 
            farthest = max(farthest, i + arr[i]);
        
        if(farthest == 0)
            return -1;
        
        l = r + 1;
        r = farthest;
        
        res += 1;
    }
    
    return res;
}
