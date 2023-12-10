class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int i=a.size()-1,j=b.size()-1;
        char carry='0';
        while(i>-1 && j>-1){
            
            if(a[i]=='1' && b[j]=='1'){
                if(carry=='0'){
                ans = ans+'0';
                }
                else{
                    ans=ans+'1';
                }
                carry='1';
            }
            else if( (a[i]=='1' && b[j]=='0') || (a[i]=='0' && b[j]=='1') ){
                if(carry=='1'){
                    ans = ans +'0';
                    carry='1';
                }
                else{
                    ans = ans+'1';
                    carry='0';
                }
            }
            else{
                if(carry=='1'){
                    ans = ans + '1';
                }
                else{
                    ans = ans+'0';
                }
                carry='0';
            }
            i--;
            j--;
        }
        
        while(j>-1){
            
            if(b[j]=='1'){
              if(carry=='1'){
                  ans = ans+'0';
                  carry='1';
              }
              else{
                  ans = ans +'1';
                  carry=0;
              }
          }
        else{
                if(carry=='1'){
                   ans = ans +'1' ;
                }
            else{
                ans = ans +'0';
            }
            carry='0';
            }
            j--;
            
        }
        
        while(i>-1){
          if(a[i]=='1'){
              if(carry=='1'){
                  ans = ans+'0';
                  carry='1';
              }
              else{
                  ans = ans +'1';
                  carry='0';
              }
          }
        else{
                if(carry=='1'){
                   ans = ans +'1' ;
                }
            else{
                ans = ans +'0';
            }
            carry='0';
            }
            i--;
        }
        
        if(carry=='1'){
            ans = ans+'1';
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};