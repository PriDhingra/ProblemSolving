

vector<pair<char,int>> duplicate_char(string s, int n){
    // Write your code here.
    
    vector<pair<char, int>> result;
    
    bool upper = false;
    
    if(isupper(s[0]))
        upper = true;
    
    vector<int> freq(26);
    
    for(int i = 0;i < n;i++) {
        if(upper) 
            freq[s[i] - 'A']++;
        else
            freq[s[i] - 'a']++;
    }
        
    
    for(int i = 0;i < 26;i++) {
        if(freq[i] > 1)
            if(upper)
                result.push_back({'A' + i, freq[i]});
            else
                result.push_back({'a' + i, freq[i]});
                
    }
    
    return result;
}
