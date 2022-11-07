class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        if(n == 89) return false;

        int sum = 0;
        while(n >= 1){
            sum += (n%10)*(n%10);
            n = n/10;
        }
        return isHappy(sum);
    }
};