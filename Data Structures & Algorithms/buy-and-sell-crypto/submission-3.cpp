class Solution {
public:
    int maxProfit(vector<int>& p) {
        int lowest = INT_MAX;
        int curProfit = 0;
        int bestProfit = 0;
        for(int i=0; i<p.size(); i++){
            lowest = min(lowest, p[i]);
            curProfit = p[i] - lowest;
            bestProfit = max(curProfit, bestProfit);
        }
        return bestProfit;
    }
};
