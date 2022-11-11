class Solution {
public:
int longestConsecutive(vector<int>& nums) {
	if(nums.size() < 1) return 0;
    if(nums.size() == 1) return 1;
	sort(nums.begin(), nums.end());
	int longest = 0, currentLongest = 1;
	for(int i = 1; i < size(nums); i++) 
    {
        if(nums[i] == nums[i - 1]) continue;
		else if(nums[i] == nums[i - 1] + 1) currentLongest++; 		
		else longest = max(longest, currentLongest), currentLongest = 1; 
    }
	return max(longest, currentLongest);
}
};