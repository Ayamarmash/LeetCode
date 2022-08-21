// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     int start = 1;
        int last = n;
        int mid;
        while(start < last){
             mid = start + (last-start)/2;
            if(!isBadVersion(mid))  start = mid+1;
            else last = mid;
        }
        return last;
        
    }
};