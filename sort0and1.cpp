void sort0and1(int n, vector<int> &A){
    // Write your code here.
    int k = n - 1;
    int i = 0;
    
    while(i < k) {
        if(A[i] == 0) 
            i++;
        else if(A[i] == 1)
            swap(A[i], A[k--]);
    }
}
