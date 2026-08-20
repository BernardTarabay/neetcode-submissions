class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        for (int x = 0; x < nums.size(); x++) {
            int product = 1;
            for (int i = 0; i < nums.size(); i++) {
                if (i != x) {
                    product *= nums[i];
                }
            }
            v.push_back(product);
        }
        return v;
    }
};
