class Solution {
public:
    int dp[1001];
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return possibleCom(nums,target);
    }
    int possibleCom(vector<int> nums,int tag){
        // int res=0;
        if(tag==0){
            return 1;
        }
            if(dp[tag]==-1){
                int res=0;
                
                for(int i=0;i<nums.size();i++){
                    if(tag>=nums[i])
                        res+=possibleCom(nums,tag-nums[i]);       
                }
                dp[tag]=res;
            }
        return dp[tag];
    }
};