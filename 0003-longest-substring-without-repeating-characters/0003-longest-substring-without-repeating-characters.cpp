class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int Start = 0;
        int End = 0;
        int max = 0;
        for(End; End<s.length(); End++)
        {                
            freq[s[End]]++;
            if(freq[s[End]] == 1)
            {
                if(max < (End-Start)+1) max = End-Start+1;
            }
            else
            {
                while(freq[s[End]] > 1)
                {                
                    freq[s[Start]]--;
                    Start++;
                }
                if(max < (End-Start)+1) max = End-Start+1;
            }
        }
        return max;
    }
};
//// 