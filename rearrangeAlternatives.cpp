
void rearrange(vector<int> &arr)
{
	// Write your code here.
    int n = arr.size();
    
    int i = 0;
    int j = n - 1;
    
    int pivot = -1;
    
    while(i < n) {
        if(arr[i] < 0) {
            pivot++;
            swap(arr[i], arr[pivot]);
            i++;
        } else {
            i++;
        }
    }
    
    int neg = 0;
    int pos = pivot + 1;
    
    while(pos < n && neg < pos && arr[neg] < 0) {
        swap(arr[neg], arr[pos]);
        neg += 2;
        pos += 1;
    }
}
