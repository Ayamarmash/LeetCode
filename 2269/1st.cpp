class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string numb = to_string(num);
        int start= 0;
        int end= k-1;

        int sum= 0;
        if(k == numb.length()) return 1;
        if(k > numb.length()) return 0;
        if(numb.length() == 2){

            if((num/10) == 0 && (num%10) == 0 ) return 0;
            if((num/10) == 0 || (num%10) == 0 ) return 1;
            
            if(num% (num/10) == 0 && num% (num%10) == 0) return 2;
            if(num% (num/10) == 0 || num% (num%10) == 0) return 1;
            return 0;
        }
        
        string current;
        while(end < numb.length() && end-start == k-1)
        {
            current= "";
            if(start == end){
                current= numb[start];
                if(stoi(current) != 0){
                    if(num%stoi(current) == 0){
                    sum++;
                    start++;
                }
                    else start++;
                    end++;
                }
                else{ 
                    start++;end++;
                }
            }
            
            else{
                for(int i= start; i<=end; i++){
                current += numb[i] ;
                }
                start++;
                end++;
                if( stoi(current) != 0 ){
                    if(  num%stoi(current) == 0 ) 
                    {
                        sum++;
                    }
                }
            }
        }

        return sum;
    }
};
