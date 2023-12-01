class Solution {
public:
   
    int equalPairs(vector<vector<int>>& grid) {
        
        double count=0;
        map<vector<int>,int> mp;
        
        for(int i=0;i<grid.size();i++){
            mp[grid[i]]++;
        }
        
        
        int ans = 0;
        
        for(int i=0;i<grid.size();i++){
            vector<int> store;
            for(int j=0;j<grid.size();j++){
                store.push_back(grid[j][i]);
            }
            if(mp.count(store)){
                ans = ans + mp[store];
            }
        }
        return ans;
    }
    
};