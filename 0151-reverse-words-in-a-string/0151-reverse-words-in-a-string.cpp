class Solution {
public:
    string reverseWords(string s) {
        
//         int i=0,j=s.size()-1;
        
//         while(s[i]==' '){
//             i++;
//         }
        
//         while(s[j]==' '){
//             j--;
//         }

//         s = s.substr(i,j-i+1);
//         reverse(s.begin(),s.end());
//         int last=0,count=0;;
//         for(int i=0;i<s.size();i++)
//         {
            
//             if(s[i]==' ')
//             {
//                 count++;
                
//                 reverse(s.begin()+last,s.begin()+i);
//                 last = i+1;
//             }
//             else{
//                 count=0;
//             }
            
//         }
        
//         if(last != s.size()-1)
//         {
//             reverse(s.begin()+last,s.end());
//         }
        
//         return s;
        
        vector<string> ans;
        string store="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                store = store + s[i];
            }
            else{
                
                if(store.size()){
                    ans.push_back(store);
                    store="";
                }
            }
            
            if(i==s.size()-1 && s[i]!=' '){
                 ans.push_back(store);
            }
        }
        
        s="";
        for(int i=ans.size()-1;i>=0;i--){
            s = s+ans[i];
            if(i!=0){
                s=s+" ";
            }
        }
        return s;
        
        
        
    }
};