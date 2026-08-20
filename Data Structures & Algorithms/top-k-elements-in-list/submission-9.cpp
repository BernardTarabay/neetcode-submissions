class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int n = nums.size();
        for(const auto& i : nums){
            map[i]++;
        }
        vector<vector<int>> v(n+1);
        for(auto& j : map){
            v[j.second].push_back(j.first);
        }
        vector<int> a;
        for (int i = n; i >= 0 && a.size() < k; i--){
        for(int num : v[i]){
            a.push_back(num);
        }}
        return a;
    }
};
