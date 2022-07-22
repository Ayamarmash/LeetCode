class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size() == 0 || duration == 0)
        {
            return 0;
        }

        int TotalTime= 0;
        int start= timeSeries[0];
        int end= timeSeries[0]+duration -1;
        bool flag= false;
        
        for(int i=1; i<timeSeries.size(); i++)
        {
            if( end >= timeSeries[i])
            {
                end= max(end, timeSeries[i]+duration -1);
            }        
            else
            {
                TotalTime += end-start+1;
                start = timeSeries[i];
                end = timeSeries[i]+duration -1 ;             
                if(i == timeSeries.size()) flag= true;
            }
        }
        if(!flag)TotalTime +=end-start+1;
        return TotalTime;
    }
};