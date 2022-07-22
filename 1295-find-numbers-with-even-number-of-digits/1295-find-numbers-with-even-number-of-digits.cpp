class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
             
    int result = 0;
    for(int i =0 ;i< nums.size() ; i++)
    {
        int digit = 0;
        while(nums.at(i) > 0)
        {
            nums.at(i) = nums.at(i)/10;
            digit++;
        }
        if(digit%2 == 0) result ++;
    }
    return result;   
    }
};