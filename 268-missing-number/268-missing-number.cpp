class Solution {
public:
    int missingNumber(vector<int>& nums){
    int i = 0;
    while (i < nums.size()) {
      if (nums[i] < nums.size() && nums[i] != nums[nums[i]]) {
        swap(nums, i, nums[i]);
      } else {
        i++;
      }
    }

    // find the first number missing from its index, that will be our required number
    for (i = 0; i < nums.size(); i++) {
      if (nums[i] != i) {
        return i;
      }
    }

    return nums.size();
  }
      static void swap(vector<int> &arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
};