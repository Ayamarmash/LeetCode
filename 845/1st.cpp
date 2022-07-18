class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size() < 3) return 0;
        
        int maxLength= 0;
        for(int i=1; i<arr.size()-1; i++)
        {
            int ptr1= i-1;
            int ptr2= i+1;
            int currentLength= 0;
            
            if(arr[ptr1] < arr[i] && arr[i] > arr[ptr2]  && ptr1 >= 0 && ptr2 < arr.size())
            {
                currentLength= 3;
                while(ptr1 > 0 && arr[ptr1] > arr[ptr1-1])
                {
                    currentLength++;
                    ptr1--;
                }
                while(ptr2 < arr.size()-1 && arr[ptr2] > arr[ptr2+1])
                {
                    currentLength++;
                    ptr2++;
                }
                maxLength= max(maxLength, currentLength);
            }

        }
        return maxLength;
    }
};
