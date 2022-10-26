class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> answer;
        unordered_map <char, int> ptrn;
        unordered_map <char, int> str;

        int start = 0, end = p.length();
        if(p.length() > s.length()) return {};
        
        for(end=0; end<s.length(); end++){
            if(end < p.length()) {
                ptrn[p[end]]++; 
                str[s[end]]++;
            }
            else 
            {
                if(ptrn == str) answer.push_back(start);
                str[s[start]]--;
                if(str[s[start]] == 0) str.erase(s[start]);
                start++;
                str[s[end]]++;
            }
        }
        if(ptrn == str) answer.push_back(start);
        return answer;
    }
};