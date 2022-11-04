class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size() == 2) return {nums[1], nums[0]};
        vector<int> answer;
        int Product = 1;
        int i;
        for(i=0; i<nums.size(); i++){
            answer.push_back(Product);
            Product = Product * nums[i];
        }
        Product = 1;
        for(i=nums.size()-1; i >= 0; i--){
            answer[i] = answer[i] * Product;
            Product = Product * nums[i];
        }
        return answer;
    }
};