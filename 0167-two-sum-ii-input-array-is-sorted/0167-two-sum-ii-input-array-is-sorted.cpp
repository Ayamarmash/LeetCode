class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size() < 2)
        {
            return {};
        }
        if(numbers.size() == 2)
        {
            if(numbers[0]+numbers[1] == target) return {1,2};
            return {};
        }
        int Start= 0;
        int End= numbers.size()-1;
        
        while(Start < End)
        {
            if(numbers[Start]+numbers[End] == target) return{Start+1, End+1};
            if(numbers[Start]+numbers[End] > target) End--;
            if(numbers[Start]+numbers[End] < target) Start++;
        }
        return {};
    }
};
