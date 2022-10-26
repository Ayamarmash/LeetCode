class Solution {
public:
    bool checkInclusion(string pattern, string string) 
    {
        unordered_map <char, int> ptrn;
        unordered_map <char, int> str;
        int i;
        int start = 0, end = pattern.length();
        if(pattern.length() > string.length()) return false;
        for(i=0; i<pattern.length(); i++) ptrn[pattern[i]]++;
        for(i=0; i<pattern.length(); i++) str[string[i]]++;
        cout << "Here 1" << endl;
        for(end; end<string.length(); end++){
            cout << "at " << end << endl;

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