class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() == 0) return false;
        if(word.length() == 1) return true;
        int start = 0;
        if(word[start] >= 65 && word[start] <= 90) start++;
        bool flag = true;
        bool isCapital;
        if(word[start] >= 65 && word[start] <= 90) isCapital = true;
        else isCapital = false;

        start++;
        while(start < word.length()){
            cout << "now at " << word[start] << endl;
            if(word[start] >= 65 && word[start] <= 90 && isCapital) start++;
            else if (word[start] >= 97 && word[start] <= 122 && !isCapital) start++;
            else return false;
        }
        return true;
    }
};
