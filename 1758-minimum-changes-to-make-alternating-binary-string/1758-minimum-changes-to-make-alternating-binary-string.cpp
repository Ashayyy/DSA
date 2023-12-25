class Solution {
public:
    int minOperations(string s) {
        int zerocount = 0 ,onecount=0;
        
           for(int i=0;i<s.size();i++){
               if(i%2==0){
                   if(s[i]=='0'){
                       onecount++;
                   }
                   else{
                       zerocount++;
                   }
               }
               else {
                   if(s[i]=='1'){
                     onecount++;  
                   }
                   else{
                      zerocount++; 
                   }
               }
           }
       
        

        
        return min(onecount,zerocount);
    }
};