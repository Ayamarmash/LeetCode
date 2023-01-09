class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if(nums.size() == 0) return {};
        int sumSoFar = 0;
        for(int i = 0; i < nums.size(); i++){
            sumSoFar += nums[i];
            nums[i] = sumSoFar;
        }
        return nums;
    }
};