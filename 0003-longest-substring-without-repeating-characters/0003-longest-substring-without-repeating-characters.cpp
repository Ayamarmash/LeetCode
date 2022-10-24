#include <algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0 || s.size() == 1) return s.size();
        if(s.size() == 2){
            if(s[0] == s[1]) return 1;
            else return 2;
        } 
        int start = 0;
        int end = 0;
        int ans = 0;
        unordered_map<char,int> index;
        for(end = 0; end<s.size(); end++) index[s[end]] = -1;
        for(end = 0; end < s.size(); end++){
            if(index[s[end]] >= 0){
                // the char was found somewhere else, which means it's duplicated
                if(index[s[end]] + 1 <= end) start = max(start,index[s[end]] + 1);
                index[s[end]] = max(index[s[end]] , end);
                ans = max(ans , end-start+1);
            }
            else{
                index[s[end]] = end;
                ans = max(ans , end-start+1);
            }
        }

        return ans;
    }
};