class Solution {
public:
    int compress(vector<char>& chars) { 
        
        
        string s="";
        int i=0,j=1,count=1;
        int n = chars.size();
        int index=0;
      
        while(j<n){
            
            if(chars[i]==chars[j]){
                count++;
                j++;
            }
            else{
                
                if(count>1)  {
                    s+=chars[i];
                    s+=to_string(count);
                }
                else  {
                    s+=chars[i];
                }
                 
                count=1;
                i=j;
                j++;
            }
            
        }
        
        if( j == n){
            s+=chars[i];
            
            if(count>1)
            s+=to_string(count);
        }
        
        int ind;
        for( ind=0;ind<s.size();ind++){
            chars[ind]=s[ind];
        }
        
        while(ind < n){
            chars.pop_back();
            ind++;
        }
        
        return chars.size();
    }
};