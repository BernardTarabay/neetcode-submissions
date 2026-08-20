class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int mn = INT_MAX;
            for (int j = i; j < n; j++) {
                mn = min(mn, heights[j]);         
                int area = mn * (j - i + 1);
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};
