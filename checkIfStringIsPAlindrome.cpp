bool checkPalindrome(string s)
{
    // Write your code here.
    string temp = "";
    
    for(int i = 0;i < s.length();i++) {     
        if((s[i] - '0' >= 0 && s[i] - '0' <= 9) || (s[i] >= 'a' && s[i] <= 'z'))
            temp += s[i];
        
        if(s[i] >= 'A' && s[i] <= 'Z')
            temp += tolower(s[i]);
    }
    
    int i = 0;
    int j = temp.length() - 1;
    
    while(i <= j) {
         if(temp[i++] != temp[j--])  
             return false;
    }
    
    return 1;
}
