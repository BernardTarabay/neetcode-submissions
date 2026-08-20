class Solution {
public:
    int trap(vector<int>& height) {
        int left =0; int right = height.size()-1;
        int total =0;
        int leftMax=height[left];
        int rightMax=height[right];
        while(left<right){
            if(leftMax<rightMax){
                left++;
                leftMax=max(leftMax, height[left]);
                total += leftMax - height[left];
            }
            else{
                right--;
                rightMax=max(rightMax, height[right]);
                total += rightMax - height[right];
            }
        }
        return total;
    }
};
