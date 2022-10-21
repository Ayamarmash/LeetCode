class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        
        int End = 0;
        int max = nums[0];
        int current = 0;
        for(End; End<nums.size(); End++)
        {
            current += nums[End];
            if(current > max) max = current;
            if(current < 0) current = 0;

        }
        return max;
    }
};