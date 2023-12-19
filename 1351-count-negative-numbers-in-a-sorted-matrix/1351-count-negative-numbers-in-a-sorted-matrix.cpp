class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int count =0 ;
        for(int i=0;i<grid.size();i++){
            vector<int> temp=grid[i];
            for(int j=0;j<temp.size();j++){
                if(temp[j]<0)
                    count++;
            }
        }
        return count;
    }
};