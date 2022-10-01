class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() == 0) return {};
        if(nums.size() == 1) return {nums[0]};
        if(nums.size() == 2)
        {
            if(nums[0] == nums[1]) return {nums[0]};
            return {nums[0], nums[1]};
        }
        
        unordered_map<int, int> freq;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        priority_queue< pair<int,int> > pq;
        unordered_map<int, int> :: iterator itr= freq.begin();
        while(itr != freq.end())
        {
            pq.push(make_pair(itr->second, itr->first));
            itr++;
            // itr->second means the freq (value), itr->first means the number (key)
        }
        for(int i=0; i<k; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
