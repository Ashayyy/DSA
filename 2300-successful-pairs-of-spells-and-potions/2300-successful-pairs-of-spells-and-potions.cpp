class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
    
        sort(potions.begin(),potions.end());
        int i=0;
    
        for(int i=0;i<spells.size();i++){
            
            int start = 0 ,end = potions.size()-1;
            
            while(start<=end){
                int mid = (start+end)/2;
                if( (long long) spells[i] * potions[mid] >= success ){
                    end = mid-1;
                }
                else{
                    start = mid + 1;
                }
            }
            int count = potions.size() - start;
            
            ans.push_back( count);
        }
        return ans;
    }
};