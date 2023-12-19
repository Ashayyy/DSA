class Solution {
public:
    int countElements(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int min=nums[0] , max=nums[nums.size()-1];
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            if(min<nums[i] && nums[i] < max)
                count++;
        }
        
        return count;
    }
};