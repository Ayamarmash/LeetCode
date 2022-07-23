class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool found;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != i){
                found= false;
                int j= 0;
                while(!found && j<nums.size()){
                    if(i == nums[j]) found = true;
                    else j++;
                }
                if(!found) return i;
            }
        }
        return nums.size();
    }
};