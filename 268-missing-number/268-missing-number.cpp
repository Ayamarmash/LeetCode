class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        if(nums[0] != 0) return 0;
        int i= 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != i) return i;
        }
        return nums.size();
    }
};