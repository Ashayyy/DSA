class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        unordered_map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        
        for(int i=0;i<s.size();i++){
            
            if(( s[i]=='V' || s[i]=='X') && i!=0 ){
                if(s[i-1]=='I'){
                    sum = sum - m[s[i-1]];
                    sum = sum + m[s[i]] - m[s[i-1]];
                }
                else{
                    sum = sum + m[s[i]];
                }
            }
            else if( (s[i]=='L' || s[i]=='C') && i!=0  ){
                 if(s[i-1]=='X'){
                     sum = sum - m[s[i-1]];
                    sum = sum + m[s[i]] - m[s[i-1]];
                }
                else{
                    sum = sum + m[s[i]];
                }
            }
            else if( (s[i]=='M' || s[i]=='D')  && i!=0){
                if(s[i-1]=='C'){
                    sum = sum - m[s[i-1]];
                    sum = sum + m[s[i]] - m[s[i-1]];
                }
                else{
                    sum = sum + m[s[i]];
                }
            }
            else{
                sum = sum + m[s[i]];
            }
        }
        
        return sum;
    }
};