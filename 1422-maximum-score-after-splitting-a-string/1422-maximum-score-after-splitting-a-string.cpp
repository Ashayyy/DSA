class Solution {
public:

    
    int maxScore(string s) {
        
        if(s.size()==2){
            if(s[0]=='0' && s[1]=='1') 
                return 2;
            else if( s[0]=='0' || s[1]=='1' )
                return 1;
        }
        
        int maxi = 0;
        
        int r = count(s.begin(),s.end(),'1');
        int l=0;
        int n = s.size()-1;
        for(int i=0;i<n;i++){
          
            if(s[i]=='0')
              l++;
            else
                r--;
            
            maxi = max(maxi,l+r);
            
        }
        
        return maxi;
    }
};