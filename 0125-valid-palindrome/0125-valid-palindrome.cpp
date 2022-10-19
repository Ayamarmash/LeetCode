class Solution {
public:
    bool isPalindrome(string s) {
        int Start=0;
        int End=s.size()-1;
        while(Start < End)
        {
            if(!isalnum(s[Start])) Start++;
            else if(!isalnum(s[End])) End--;
            
            else if(tolower(s[Start])!=tolower(s[End])) return false;
            else
            {
                Start++;
                End--;
            }
        }
        return true;
    }
};