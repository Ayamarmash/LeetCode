class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i= 0;
        while(i+1 < nums.size())
        {
            if(nums[i] == nums[i+1]) i +=2;
            else return nums[i];
        }
        return nums[nums.size()-1];
    }
};