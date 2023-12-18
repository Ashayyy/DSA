class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        s = s +" ";
        
        int i=0,j=0;
        unordered_map<string,char> m1;
        unordered_map<char,string> m2;
        
        while(i<pattern.size() && j<s.size()){
            
            string temp="";
    
            while(s[j] != ' '){
                temp = temp + s[j];
                j++;
            }
            
            j++;
            
            if( m1.count(temp) && m1[temp] != pattern[i] )
                return false;
            
            if( m2.count(pattern[i]) && m2[pattern[i]] != temp )
                return false;
            
            m1[temp] = pattern[i];
            m2[pattern[i]]=temp;
            
            i++;
        }
        
        if(j<s.size() || i<pattern.size())
            return false;
        
        return true;
        
    }
};