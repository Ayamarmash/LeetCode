class Solution {
public:
    bool isValid(string s) {
        if(s.length() < 2) return false;
        stack<int> pStack;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') pStack.push(s[i]);
            else if(s[i] == ')'){
                if(pStack.empty()) return false;
                else if (pStack.top() != '(') return false;
                else pStack.pop();
            }
            else if(s[i] == '}'){
                if(pStack.empty()) return false;
                else if (pStack.top() != '{') return false;
                else pStack.pop();
            }
            else if(s[i] == ']'){
                if(pStack.empty()) return false;
                else if (pStack.top() != '[') return false;
                else pStack.pop();
            }
            else continue;
        }

        if(!pStack.empty()) return false;
        return true;
    }
};