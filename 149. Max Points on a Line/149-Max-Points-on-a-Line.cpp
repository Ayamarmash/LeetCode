class Solution {
public:

    int maxPoints(vector<vector<int>>& points) {
        if(points.size() == 1) return 1;
        int maxNumber = 0;
        for(int i = 0; i < points.size(); i++){
            unordered_map<double, int> pointsAtTheSameSlope;
            for(int j = i+1; j < points.size(); j++){
                double slope = 0;
                if((points[j][0]-points[i][0]) == 0) slope = DBL_MAX;
                else{
                    slope = ((double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]));
                }
                pointsAtTheSameSlope[slope]++;
                maxNumber = max(maxNumber, pointsAtTheSameSlope[slope]);
            }
        }
        return maxNumber+1;
    }
};
