class Solution {
public:
    bool checkInclusion(string pattern, string string) 
    {
        unordered_map <char, int> ptrn;
        unordered_map <char, int> str;
        int i;
        int start = 0, end = pattern.length();
        if(pattern.length() > string.length()) return false;
        for(i=0; i<pattern.length(); i++) {
            ptrn[pattern[i]]++;
            str[string[i]]++;
        }
        for(end; end<string.length(); end++){
            if(ptrn == str) return true;
            str[string[start]]--;
            if(str[string[start]] == 0) str.erase(string[start]);
            start++;
            str[string[end]]++;
        }
        if(ptrn == str) return true;
        return false;
    }
};