class Solution {
public:
    int getSum(int a, int b) {
    vector<int>ans;
    ans.push_back(a);
    ans.push_back(b);
        
    int finalAnswer =accumulate(ans.begin(),ans.end(),0);
    return finalAnswer;
}
};
