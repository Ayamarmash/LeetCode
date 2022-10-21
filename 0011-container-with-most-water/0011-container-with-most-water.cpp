#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int Start = 0;
        int End = height.size()-1; // the number of vertical lines
        int max = 0;
        while(Start < End)
        {
            int min;// min(height[Start], height[End]);
            if(height[Start] < height[End]) min = height[Start];
            else min = height [End];
            
            int area = min*(End-Start);
            if(area > max) max = area;            
            if(height[Start] > height[End]) End--;
            else Start++;
        }
        return max;
    }
};