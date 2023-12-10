class Solution {
public:
    bool isPalindrome(string s) 
    {
        int i=0,j=0;
        while(j<s.size()){
            if( (s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122) || (s[j]>=48 && s[j]<=57) ){
                
                if(s[j]>=65 && s[j]<=90){
                    s[j]=s[j]+32;
                }
                s[i++]=s[j++];
            }
            else{
                j++;
            }
        }
        s = s.substr(0,i);
        string ans = s;
        reverse(ans.begin(),ans.end());
        
        return ans==s;
    }
};