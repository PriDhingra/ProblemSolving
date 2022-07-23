int palindrome(vector<int> A)
{
	// Write your code here.
    int n = A.size();
    int i = 0;
    int j = n - 1;
    int ans = 0;
    
    long long left = A[0];
    long long right = A[n - 1];
    
    while(i < j) {
        if(left == right) {
            i++;
            j--;
            left = A[i];
            right = A[j];
        } else if(left < right) {
            ans++;
            left += A[i + 1];
            i++;
        } else {
            ans++;
            right += A[j - 1];
            j--;
        }
    }
    
    return ans;
}
