class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size() == 2) return {nums[1], nums[0]};
        vector<int> answer;
        int preProduct = 1, postProduct = 1;
        int i;
        for(i=0; i<nums.size(); i++){
            answer.push_back(preProduct);
            preProduct = preProduct * nums[i];
        }
        for(i=nums.size()-1; i >= 0; i--){
            answer[i] = answer[i] * postProduct;
            postProduct = postProduct * nums[i];
        }
        return answer;
    }
};