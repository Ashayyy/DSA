class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s.size()!=goal.size() || s.size()==1)
            return false;
        
        if(s==goal){
            unordered_map<char,int> temp;
            for(int i=0;i<s.size();i++){
                temp[s[i]]++;
            }
            if(temp.size()<s.size())
                return true;
        }
        
        unordered_map<char,int> a,b;
        
        for(int i=0;i<s.size();i++) a[s[i]]++;
        for(int j=0;j<goal.size();j++) b[goal[j]]++;
        
        int count=0;
        for(int i=0;i<s.size();i++) {
            
            if(a[goal[i]]==0 || b[s[i]]==0 )
                return false;
            
            if(goal[i]!=s[i]){
                count++;
                a[goal[i]]--;
                b[s[i]]--;
            }
            if(count>2) return false;
            
        }
        return count == 2 ? true : false;
    }
};