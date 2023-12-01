class Solution {
public:
    
//   pair<int,int> left(int index , vector<int> &height){
//         int max =   0 ,count=0;
//         for(int i=index-1;i>=0;i--){
//             if(height[i]>=max){
//                 max = height[i];
//                 count=i;
//             }
//         }
//         return {max,count-index};
//     }
    
//      pair<int,int> right(int index , vector<int> &height){
//         int max = 0 ,count=0;
//         for(int i=index+1;i<height.size();i++){
//             if(height[i]>=max){
//                 max = height[i];
//                 count = i;
//             }
//         }
//         return {max,count-index};
//     }
    
    int maxArea(vector<int>& height) {
        
        if(height.size()==2)
            return min(height[0],height[1]);
        
        if(height.size()==1)
            return height[0];
        
        
        int maxi=INT_MIN;
        int mini = INT_MAX;
//         for(int i=1;i<height.size()-1;i++){
            
//             pair<int,int> l = left(i,height);
//             pair<int,int> r = right(i,height);
//             mini = min(l.first,r.first);
//             maxi = max(maxi , mini*(l.second+r.second) );
            
//         }
        
        int start=0,end=height.size()-1;
        
        while(start<end){
            mini =  min(height[start],height[end]);
            int capacity = mini*(end-start);
            maxi = max(maxi,capacity);
            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        
        return maxi;
    }
};