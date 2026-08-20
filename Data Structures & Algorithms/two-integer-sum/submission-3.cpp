class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            int needed = target - nums[i];
            if(map.count(needed)){
                return {map[needed], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
