class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        //can be formed by characters from chars
        //i will go through each word, check if every char in this word exist in the chars       
        //if the char exist we delete it from chars
        
        ////////// create unordered_map and store the chars, value = 1 if char exist in chars
        ///////// check every chars value in a word (in the unordered_map)
        
        //if the word is good i will add it's length to SUM
        
        unordered_map<char,int> Chars;
        for(int i=0; i< chars.length(); i++) Chars[ chars[i] ]++;

        int FinalSum= 0;
        for(int i=0; i< words.size(); i++)
        {                    
            unordered_map<char,int>temp= Chars;

            bool isGood= true;
            int j= 0;
            
            while(j != words[i].length() && isGood)
            {
                if( temp[words[i][j]] < 1 ) isGood = false;
                else
                {
                    temp[words[i][j]]--;
                    if(temp[words[i][j]] < 1) temp.erase(temp[words[i][j]]); 
                    j++;
                }
            }
            
            if(isGood) FinalSum += words[i].length();
        }
        return FinalSum;
    }
};