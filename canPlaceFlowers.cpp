class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        f.push_back(0);
        f.insert(f.begin(), 0);
        
        for(int i = 1;i < f.size() - 1;i++) {
            if(f[i - 1] == 0 && f[i] == 0 && f[i + 1] == 0) {
                f[i] = 1;
                n -= 1;
            }
        }
        
        return n <= 0;
    }
};
