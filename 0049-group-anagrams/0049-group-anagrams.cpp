class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        //  taking an container to store string
        vector<vector<string>> ans;
        
        // storing occurence of each word of different form
        unordered_map<string,vector<string>> m;
        
        
        for(int i=0;i<strs.size();i++){
            string word = strs[i];
            sort(word.begin(),word.end());
            m[word].push_back(strs[i]);
        }
        
        for(auto it = m.begin(); it!=m.end();it++){
            ans.push_back(it->second);
        }
        
        return ans;
    }
};