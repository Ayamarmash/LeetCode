class Solution {
public:
    bool checkInclusion(string pattern, string string) 
    {
        unordered_map <char, int> ptrn;
        unordered_map <char, int> str;

        int start = 0, end;
        if(pattern.length() > string.length()) return false;
        for(end=0; end<pattern.length(); end++) {
            ptrn[pattern[end]]++; 
            str[string[end]]++;
        }

        for(end = pattern.length(); end<string.length(); end++){
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