class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() < 2) return intervals;
          // sort the intervals by start time
    sort(intervals.begin(), intervals.end(),
    [](const vector<int> &x, const vector<int> &y) { return x[0] < y[0]; });
      
        vector<vector<int>> Result;
          // Iterator to point at the begining of the intervals (first interval) e.g: {2, 4}
        vector<vector<int>>:: iterator Current = intervals.begin();
          // Interval to store the current interval, then move the Iterator to the next interval
        vector<int> Interval= (*Current++);
        int start= Interval[0];
        int end= Interval[1];
      
            // while the iterator is not at the end of intervals
        while(Current != intervals.end())
        {
          // interval to store the current interval {5, 9} then move the iterator
            Interval= *Current++;      
          // if the current interval start is smaller or equal to the END of the previous one, then they're overlapping
          // so we will compine them by taking the max END
            if( Interval[0] <= end)
            {
                end= max( Interval[1], end);
            }
          // otherwise they're not overlapping, so we will push the prrevious one and move to copmare the current with it's next
            else
            {
                Result.push_back({start,end});
                start= Interval[0];
                end= Interval[1];
            }
        }    
      // add the last interval
        Result.push_back({start,end});
        return Result;
    }
};
