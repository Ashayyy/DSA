class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int maxi=INT_MIN;
        int i=0,j=0;
        int zerocount=0;
        while(i<nums.size()){
            
           if(nums[i]==0){
               zerocount++;
           }
            
            while(zerocount>1){
                
                if(nums[j]==0){
                    zerocount--;
                    
                }
                j++;
            }
            
        maxi = max(maxi,i-j);
                        i++;
        }
        return maxi;
    }
};