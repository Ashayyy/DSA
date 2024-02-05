class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1 || !s.size())
            return s.size();
        
        
        unordered_map<char,int> m;
        int odd=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            if(m[s[i]]%2==1){
                odd++;
            }
            else{
                odd--;
            }
        }
        
        if(odd>1){
            return s.size() - odd + 1;
        }
        
        return s.size();
    }
};