class Solution {
public:
    int firstMissingPositive(vector<int>& nums) { 
        int i;
        for( i=0; i<nums.size(); i++)
        {
            if(nums[i] <= 0 || nums[i] > nums.size())
            {
                //cout <<nums[i] <<"  changed to  0" << endl;
                nums[i]= 0;
            }
        }
        i= 0;
        while(i < nums.size())
        {
            if(nums[i] != 0 && nums[i] != nums[nums[i]-1]) 
            {
                //cout << nums[i] << " swapped with  " << nums[nums[i]-1]<<endl;
                Swap(nums, nums[i]- 1, i);
            }       
            else i++;
        }

        for(i=0 ; i<nums.size() ; i++) if(nums[i] != i+1) return i+1;
        return nums.size()+1;
    }
    
    void Swap(vector<int>& nums, int x, int y)
    {
        int temp= nums[x];
        nums[x]= nums[y];
        nums[y]= temp;
    }
};