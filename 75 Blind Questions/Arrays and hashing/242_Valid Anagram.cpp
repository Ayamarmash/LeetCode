class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<int,char> freq1, freq2;
        
        for(int i=0; i< s.size(); i++)
        {
            freq1[s[i]]++;
            freq2[t[i]]++;
        }
        if (freq1 == freq2) return true;
        return false;
    }
};
