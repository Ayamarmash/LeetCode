class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> result;
        int ptr1= 0;
        int ptr2= 0;
        if(n == 0) return;
        if(m == 0) 
        {
            for(int i=0; i<n; i++)
            {
                nums1.push_back(nums2[i]);
            }
        }
        while(ptr1 < m && ptr2 < n)
        {
            if(nums1[ptr1] < nums2[ptr2])
            {
                result.push_back(nums1[ptr1]);
                ptr1++;
            }
            else if(nums1[ptr1] == nums2[ptr2])
            {
                result.push_back(nums1[ptr1]);
                result.push_back(nums2[ptr2]);
                ptr1++;
                ptr2++;
            }
            else
            {
                result.push_back(nums2[ptr2]);
                ptr2++;
            }
        }
        while(ptr2 < n)
        {
            result.push_back(nums2[ptr2]);
            ptr2++;
        }        
        while(ptr1 < m)
        {
            result.push_back(nums1[ptr1]);
            ptr1++;
        }
        nums1= result;
    }
};