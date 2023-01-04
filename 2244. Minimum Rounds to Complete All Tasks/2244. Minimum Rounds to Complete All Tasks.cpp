class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        if(tasks.size() < 2) return -1;

        unordered_map<int, int> freq;
        for(int i = 0; i < tasks.size(); i++){
            freq[tasks[i]]++;
        }
        auto itr = freq.begin();
        int answer = 0;
        while(itr != freq.end()){
            if(itr->second < 2) return -1;
            if((itr->second)%3 == 0) answer += (itr->second)/3;
            else answer += (itr->second)/3 +1;
            itr++;
        }
        return answer;
    }
};
