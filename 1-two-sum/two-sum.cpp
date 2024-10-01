class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> freq; // the number, and it's index
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]] = -1;
        }
        for(int i = 0; i < nums.size(); i++){
            // if the number already exist, and the number+itself = target, return the indexes for each of them
            if(freq[nums[i]]+1 > 0 && nums[i]*2 == target) {
                return {freq[nums[i]]-1, i};
            }
            
            //otherwise, add the new number to the map, and check it
            else{
                freq[nums[i]] = i + 1; // to avoid the index 0 (for checking later)
                //check if the other number exist
                if(freq[target - nums[i]] > 0 && freq[target - nums[i]] - 1 != i) {
                    return {freq[target - nums[i]]-1, i};
                } 
            }
        }
        return {};
    }
};