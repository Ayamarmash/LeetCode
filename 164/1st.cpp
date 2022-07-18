class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if((nums.size()) < 2) return 0;
        
        int max = 0;
        sort(nums.begin() , nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            if ((nums.at(i+1) - nums.at(i)) > max)
            {
                max = (nums.at(i+1) - nums.at(i));
            }
        }
        return max;
    }
};
