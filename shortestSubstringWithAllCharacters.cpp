#include<bits/stdc++.h>

string shortestSubstring(string s)
{
    // Write your code here.
    unordered_map<char, int> need, window;
    
    for(auto i: s)
        need[i]++;
    
    int required = need.size();
    int have = 0;
    
    int left = 0;
    int right = 0;
    int resLength = INT_MAX;
    int start = 0;
    
    
    while(right != s.length()) {
        char ch = s[right];
        right++;
        window[ch]++;
        if(window[ch] == 1)
            have++;
        
        while(have == required) {
            if(resLength > right - left) {
                resLength = right - left;
                start = left;
            }
            window[s[left]]--;
            if(window[s[left]] == 0)
                have--;
            left++;
        }
    }
    
    return s.substr(start, resLength);
}
