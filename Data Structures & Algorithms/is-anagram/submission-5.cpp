class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> arr;
        unordered_map<char, int> arr1;
        for(const auto& i : s){
            arr[i]++;
        }
        for(const auto& j : t){
            arr1[j]++;
        }
        if(arr==arr1){
            return true;
        }
        else{
            return false;
        }
    }

};
