class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxi=0;
        int i=0;
        
        if(nums.size()==1){
            return true;
        }
        
        while(i<nums.size() && maxi>=i){
            
            maxi = max(maxi,i+nums[i]);
            
            if(maxi>=nums.size()-1)
                return true;
            
            i++;
            
        }
        
        return false;
    }
};