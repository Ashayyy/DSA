class Solution {
public:
    
    int maxArea(vector<int>& height) {
        
        if(height.size()==2)
            return min(height[0],height[1]);
        
        if(height.size()==1)
            return height[0];
        
        int maxi=INT_MIN;
    
        int mini = INT_MAX;
        int start=0;
        int end=height.size()-1;
        
        while(start<end){
            
            mini =  min(height[start],height[end]); // fetches minimum of two heights
            int capacity = mini*(end-start);    // multiplying minimum height with distance between two heights
            
            maxi = max(maxi,capacity);   // storing maximum value of water trapped among each heights


            // increases lower value because we want the maximum water trap value.
            if(height[start]<height[end]){   
                start++;            // if start pointer has low value it will get increased      
            }
            else{
                end--;             // if end pointer has low value it will get decreased.
            }
        }
        
        return maxi;
    }
};
