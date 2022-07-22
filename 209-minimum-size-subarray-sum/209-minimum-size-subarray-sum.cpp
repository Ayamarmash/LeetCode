class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int minLength = nums.size();
        int start = 0;
        int end = 0;
        int sum = 0;
        for(end; end < nums.size(); end++)
        {
            if(nums[end] >= target) return 1;
            sum += nums[end];
            if(sum >= target) minLength = min(minLength, end-start+1);
            
            while(sum-nums[start] >= target && start <= end)
            {
                sum -=nums[start];
                start++;
                minLength = min(minLength, end-start+1);
            }
        }
        if(sum < target) minLength = 0;
        return minLength;
    }
};