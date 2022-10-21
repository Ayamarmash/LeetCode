#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int Start = 0;
        int End = height.size()-1; // the number of vertical lines
        int max = 0;
        while(Start < End)
        {
            if(height[Start] < height[End])
            {
                if(height[Start]*(End-Start) > max) max = height[Start]*(End-Start);
                if(height[Start] > height[End]) End--;
                else Start++;
            }
            else
            {
                if(height [End]*(End-Start) > max) max = height [End]*(End-Start);
                if(height[Start] > height[End]) End--;
                else Start++;
            }

        }
        return max;
    }
};