vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int k = nums.size() - 1;
    int i = 0;
    
    while(i <= k) {
        if(nums[i] >= 0) {
            swap(nums[i], nums[k]);
            k--;
        } else {
            i++;
        }
    }
    return nums;
}
