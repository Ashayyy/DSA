class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        
        for(int i=0;i<intervals.size()-1;i++){
            pair<int,int> p1,p2;
            p1.first=intervals[i][0];
            p1.second=intervals[i][1];
            p2.first=intervals[i+1][0];
            p2.second=intervals[i+1][1];
            
            if(p1.second>=p2.first ){
                  
                 if(p2.second > p1.second)
                    intervals[i][1]= p2.second;
                else
                    intervals[i][1]= p1.second;
                
                
                intervals.erase(intervals.begin()+(i+1));
                --i;
                
                
            }
    
            
        }
        return intervals;
    }
};