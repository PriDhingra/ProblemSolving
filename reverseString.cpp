
string stringReverse(string S) {
    // Write your code here.
    int i = 0;
    int j = S.length() - 1;
    
    while(i < j)
        swap(S[i++], S[j--]);
    
    return S;
}
