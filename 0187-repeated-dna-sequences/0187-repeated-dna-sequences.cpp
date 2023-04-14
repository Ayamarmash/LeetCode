class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length() < 10) return {};
        int start = 0;
        vector<string> result;
        unordered_map<string, int> freq;
        while(start <= s.length() - 10){
            string temp = s.substr(start, 10);
            freq[temp]++;
            if(freq[temp] == 2) result.push_back(temp);
            start++;
        }
        return result;
    }
};