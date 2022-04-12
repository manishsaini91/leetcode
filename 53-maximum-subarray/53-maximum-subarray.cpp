class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum=nums[0];
        int tsum=nums[0];
        // if(nums.size()==1){
            // return nums[0];
        // }
        for(int i=1;i<nums.size();i++){
            if(csum>=0){
                csum=csum+nums[i];
            }else{
                csum=nums[i];
            }
            if(csum>tsum){
                tsum=csum;
            }
        }
        return tsum;
    }
};