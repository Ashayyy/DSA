class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> m;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string word = strs[i];
            sort(word.begin(),word.end());
            m[word].push_back(strs[i]);
        }
        
        for(auto i = m.begin() ;i != m.end() ;i ++){
            ans.push_back(i->second);
        }
        return ans;
    }
};