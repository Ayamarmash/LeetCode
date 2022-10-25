class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int start = 0;
        int end = 0;
        unordered_map<char, int> ptrn;
        unordered_map<char, int> string;
        for(int i=0; i < s1.length(); i++) ptrn[s1[i]]++;
        
        while(end < s2.length())
        {
            unordered_map<char, int> tmp = ptrn;
            if( end-start+1 == s1.length())
            {
                bool flag = true;
                int i = start;
                while( i <= end && flag)
                {
                    if(tmp[s2[i]] > 0)
                    {
                        tmp[s2[i]]--;
                        flag = true;
                        i++;
                    }
                    else flag = false;
                }
                if(flag) return true;
                else 
                {
                    end++;
                    start++;
                }
            }
            else end++;
        }
        return false;
    }
};