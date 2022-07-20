class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start= 0;
        int end= k-1;
        double avg= INT_MIN;
        if(nums.size() == 1) return nums[0];
        
        double sum= 0;
        for(int i=start; i<=end; i++)
        {
            sum += nums[i];
        }
        while(end < nums.size())
        {
            if( (sum/k) > avg ) avg = sum/k;
            sum -= nums[start];
            start++;
            end++;
            sum += nums[end];
        }
        return avg;
    }
};
