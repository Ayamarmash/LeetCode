class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        int start = 0, end = number.length()-1;
        while(start < end){
            if(number[start] != number[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};
