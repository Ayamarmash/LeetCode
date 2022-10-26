class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> answer;
        unordered_map <char, int> ptrn;
        unordered_map <char, int> str;

        int start = 0, end = p.length();
        if(p.length() > s.length()) return {};
        
        for(end=0; end<p.length(); end++) {
            ptrn[p[end]]++; 
            str[s[end]]++;
        }

        for(end=p.length(); end<s.length(); end++){
            if(ptrn == str) answer.push_back(start);
            str[s[start]]--;
            if(str[s[start]] == 0) str.erase(s[start]);
            start++;
            str[s[end]]++;
        }
        if(ptrn == str) answer.push_back(start);
        return answer;
    }
};