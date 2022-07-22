class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) return 0;
        
        int start= 0;
        int end= 0;
        int maxl=0;
        unordered_map<char, int> freq;
        
        for(end; end < s.length(); end++)
        {
            char current= s[end];
            freq[current]++;
            if(freq.size() == end-start+1) maxl= max(maxl, end-start+1);

            while(freq.size() < end-start+1)//Remove Duplicates
            {
                freq[s[start]]--;
                if(freq[s[start]] == 0) freq.erase(s[start]);
                start++;
            }
            
        }
        return maxl;
};
};