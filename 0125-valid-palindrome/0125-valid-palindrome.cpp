class Solution {
public:
    bool isPalindrome(string s) {
        int Start=0;
        int End=s.size()-1;
        while(Start < End)
        {
            while(!isalnum(s[Start]) && Start < End) Start++;
            while(!isalnum(s[End]) && Start < End) End--;
            
            if(tolower(s[Start])!=tolower(s[End])) return false;
            else
            {
                Start++;
                End--;
            }
        }
        return true;
    }
};