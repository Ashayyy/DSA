class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size()!=word2.size())
            return false;

       unordered_map<char,int> m;
       unordered_map<char,int> n;
        
        for(int i=0;i<word1.size();i++){
            m[word1[i]]++;
            n[word2[i]]++;
        }
        
        vector<int> v1,v2,v3,v4;
        
        for(auto it : m){
            v1.push_back(it.second);
        }
        
        for(auto it : n){
            v2.push_back(it.second);
        }
        
        for(auto it : m){
            v3.push_back(it.first);
        }
        
        for(auto it : n){
            v4.push_back(it.first);
        }
        sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
         sort(v3.begin(),v3.end());
         sort(v4.begin(),v4.end());
        if(v1 == v2 && v3 == v4)
        return true;
        
        
        return false;
    }
};