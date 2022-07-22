class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() < 2) return intervals;
    sort(intervals.begin(), intervals.end(),
    [](const vector<int> &x, const vector<int> &y) { return x[0] < y[0]; });
        vector<vector<int>> Result;
        vector<vector<int>>:: iterator Current = intervals.begin();
        vector<int> Interval= (*Current++);
        int start= Interval[0];
        int end= Interval[1];
        
        while(Current != intervals.end())
        {         
            Interval= *Current++;
            if( Interval[0] <= end)
            {
                end= max( Interval[1], end);
            }
            else
            {
                Result.push_back({start,end});
                start= Interval[0];
                end= Interval[1];
            }
        }
        Result.push_back({start,end});
        return Result;
    }
};