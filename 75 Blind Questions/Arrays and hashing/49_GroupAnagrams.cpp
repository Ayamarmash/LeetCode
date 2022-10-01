class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, vector<string>> x;
        for(int i=0; i<strs.size(); i++)
        {
            string tmp= strs[i];
            sort(tmp.begin(), tmp.end());
            x[tmp].push_back(strs[i]);
        }
        for(auto it=x.begin();it!=x.end();it++)
        {
            answer.push_back(it->second);
        }
        return answer;
    };
};
