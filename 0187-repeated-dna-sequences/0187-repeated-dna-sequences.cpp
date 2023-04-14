class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length() < 10) return {};
        int start = 0;
        vector<string> result;
        unordered_map<string, int> freq;
        while(start <= s.length() - 10){
            freq[s.substr(start, 10)]++;
            if(freq[s.substr(start, 10)] == 2) result.push_back(s.substr(start, 10));
            start++;
        }
        return result;
    }
};