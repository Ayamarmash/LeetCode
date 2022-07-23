class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        if(nums[0] != 0) return 0;
        int i= 0;
        while (i+1 < nums.size() && nums[i+1]-nums[i] == 1) i++;
        return i+1;
    }
};