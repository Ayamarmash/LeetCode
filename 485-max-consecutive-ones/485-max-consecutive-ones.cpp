class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int result = 0;
    int max = result;
    
    for(int i=0; i<nums.size() ; i)
    {
        if (nums[i] == 1 )
        {
            result++;
            i++;
        }
        else
        {
            if(result > max) max = result;
            result = 0;
            i++;
        }
    }
    if(result > max) max = result;
    return max;
    }
};

