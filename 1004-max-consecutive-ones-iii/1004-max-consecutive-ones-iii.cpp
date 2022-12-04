class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        if(nums.size() < 0 ) return 0;
        if(nums.size() == 1){
            if(nums[0] == 1) return 1;
            if(nums[0] == 0){
                if(k < 0) return 0;
                else return 1;
            }
        }
        if(nums.size() == k) return k;
        int start = 0, end = 0, ans = 0, zeros = 0;

        while(end != nums.size()){
                if(nums[end] == 1){
                    if((end-start+1) > ans) ans = end-start+1;
                }
                if(nums[end] == 0){
                    zeros++;
                    if(zeros <= k){
                        if((end-start+1) > ans) ans = end-start+1;
                    }
                    else if(k == 0){
                        start = end+1;
                    }
                    else{
                        while(zeros > k && start < end){
                            if(nums[start] == 0) zeros--;
                            start++;
                        }
                    }
                }
            end++;
        }
        return ans;
    }
};