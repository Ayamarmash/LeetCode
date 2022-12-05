class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() < 0) return 0;
        if(nums.size() == 1) return nums[0];
        int i = 0, max = nums[0], currentSum = 0;
        for(i; i < nums.size(); i++){
            currentSum += nums[i];
            if(currentSum > max) max = currentSum;
            if(currentSum < 0) currentSum = 0;
        }
        return max;
    }
};