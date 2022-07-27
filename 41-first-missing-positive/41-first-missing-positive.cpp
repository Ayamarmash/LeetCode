class Solution {
public:
    int firstMissingPositive(vector<int>& nums) { 
        int i= 0;
        while(i < nums.size())
        {
            if(nums[i] <= 0 || nums[i] > nums.size())
            {
                //cout <<nums[i] <<"  changed to  0" << endl;
                nums[i]= 0;
            }
            i++;
        }
        
        i= 0;
        while(i < nums.size())
        {
            if(nums[i] > 0 && nums[i] != nums[nums[i]-1]) 
            {
                //cout << nums[i] << " swapped with  " << nums[nums[i]-1]<<endl;
                int temp= nums[nums[i]-1];
                nums[nums[i]-1] = nums[i];
                nums[i]= temp;
            }       
            else i++;
        }
        
        i= 0;
        while(i < nums.size())
        {
            if(nums[i] != i+1) return i+1;
            i++;
        }
        return nums.size()+1;
    }
};