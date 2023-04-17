class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.length() < ransomNote.length()) return false;
        unordered_map<char, int> freq;
        for(int i = 0; i < magazine.length(); i++){
            freq[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.length(); i++){
            if(freq[ransomNote[i]] <= 0) return false;
            freq[ransomNote[i]]--;
        }
        return true;
    }
};