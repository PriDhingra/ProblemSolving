void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    
    int startIndex = m + 1;
    int endIndex = arr.size() - 1;
    
    while(startIndex < endIndex) {
        swap(arr[startIndex], arr[endIndex]);
        startIndex++;
        endIndex--;
    }
}
