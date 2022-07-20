class Solution {
public:
    bool isThree(int n) {
        if(n <= 3) return false;
        
        int sum= 2; // All numbers have the divisor 1 and the number itself
        int temp= n-1;
        if(n%2 == 0) // if it's even
        {
            sum++; // number 2
            while( temp > 2)
            {
                if(n%temp == 0) // if the current number is divisor
                {
                    sum++;
                    temp = temp/2;
                    if ( sum > 3 ) return 0;
                }
                else temp--;
            }
        }
        
        else // if it's odd
        {
            cout << "Odd number" << endl;
            int minDivider= 3;
            while(n%minDivider != 0) minDivider++;
            if(minDivider != n) sum++;
            if(sum > 3) return 0;
            while( temp > minDivider)
            {
                if(n%temp == 0) // if the current number is divisor
                {
                    sum++;
                    temp = temp/minDivider;
                    if ( sum > 3 ) return 0;
                }
                else temp--;
            }
        }
        if(sum == 3) return 1;
        return 0;
    }
};
