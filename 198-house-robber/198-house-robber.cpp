class Solution {
public:
    // int dp[100];
    int rob(vector<int>& nums) {
//         int  n=nums.size();
//         memset(dp,-1,sizeof(dp));
       
//         return solve(nums,n-1);
//     }
//     int solve(vector<int> nums,int n){
//         // int n=dp.size();
//         if(n<0) 
//             return 0;
//         if(dp[n]!=-1) 
//             return dp[n];
//         return dp[n]=max(solve(nums,n-1),nums[n]+solve(nums,n-2));
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        
        int dp[n];
        memset(dp,0,sizeof(dp));
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);
        for(int i=2;i<n;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    
        
    }
};