class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0 ,b=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>b){
                a=b;
                b = nums[i];
            }
            else{
                a = max(a,nums[i]);
            }
        }
        return (a-1)*(b-1);
    }
};