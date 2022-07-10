class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        TreeNode* curr = root;
        stack<TreeNode*> st;
        while(curr != NULL || !st.empty()) {
            while(curr != NULL) {
                st.push(curr);
                curr = curr -> left;
            }
            
            curr = st.top();
            st.pop();
            
            count++;
            if(count == k)
                return curr -> val;
            
            curr = curr -> right;
        }
        
        return 0;
    }
};
