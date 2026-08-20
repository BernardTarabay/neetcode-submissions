class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> v(t.size(), 0);

        for(int i = 0; i < t.size(); i++) {
            for(int j = i + 1; j < t.size(); j++) {
                if(t[j] > t[i]) {
                    v[i] = j - i;
                    break;
                }
            }
        }

        return v;
    }
};