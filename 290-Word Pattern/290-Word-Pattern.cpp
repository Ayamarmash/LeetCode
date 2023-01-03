class Solution {
public:
    bool wordPattern(string pattern, string s) {
        if(pattern.size() == 0 && s.length() == 0) return true;
        if(pattern.size() == 0 || s.length() == 0) return false;
        stringstream st(s);
        vector<string> words;
        string temp;
        while(getline(st, temp, ' ')){
            words.push_back(temp);
        }
        
        if(words.size() != pattern.size()) return false;

        unordered_map<string, int> wordPattern;
        unordered_map<char, int> pPattern;
        string resultPattern = "";
        string resultPattern2 = "";
        for(int i=0; i<words.size(); i++){
            wordPattern[words[i]] = -1;
            pPattern[pattern[i]] = -1;
        }
        for(int i=0; i<words.size(); i++){
            //for pattern
            if(pPattern[pattern[i]] < 0){
                pPattern[pattern[i]] = i;
                resultPattern2 += to_string(i);
            }
            else{
                resultPattern2 += to_string(pPattern[pattern[i]]);
            }
            //for words
            if(wordPattern[words[i]] < 0){
                wordPattern[words[i]] = i;
                resultPattern +=  to_string(i);
            }
            else{
                resultPattern += to_string(wordPattern[words[i]]);
            }
        }
        if(resultPattern == resultPattern2) return true;
        return false;
    }
};
