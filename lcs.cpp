int solve(int ind1, int ind2, string &str1, string &str2, vector<vector<int>> &dp) {
    if(ind1 < 0 || ind2 < 0)
        return 0;
    
    if(dp[ind1][ind2] != -1)
        return dp[ind1][ind2];
    
    if(str1[ind1] == str2[ind2])
        return dp[ind1][ind2] = 1 + solve(ind1 - 1, ind2 - 1, str1, str2, dp);
    
    return dp[ind1][ind2] = max(solve(ind1 - 1, ind2, str1, str2, dp), solve(ind1, ind2 - 1, str1, str2, dp));
}

int getLengthOfLCS(string & str1, string & str2) {
  // Write your code here.
    int n = str1.size();
    int m = str2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     return solve(n - 1, m - 1, str1, str2, dp);
    
    for(int ind1 = 1;ind1 <= n;ind1++) {
        for(int ind2 = 1;ind2 <= m;ind2++) {
            if(str1[ind1 - 1] == str2[ind2 - 1])
                dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
            else
                dp[ind1][ind2] = max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]);
        }
    }
    
    return dp[n][m];
    
    
}
