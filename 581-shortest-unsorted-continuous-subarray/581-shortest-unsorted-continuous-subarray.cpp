class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        // int n=nums.size();
        // int i=0,j=n-1;
        // for(int k=0;k<n;k++){
        //     if(i==n-1)return 0;
        //     if(nums[i+1]>=nums[i]){
        //         i++;
        //     }
        //     if(nums[j-1]<=nums[j]){
        //         j--;
        //     }
        // }
        // // if(i==n-1) return 0;
        // return j-i+1;
        int n = nums.size();
        vector<int> maxlhs(n);   // max number from left to cur
        vector<int> minrhs(n);   // min number from right to cur
        for (int i = n - 1, minr = INT_MAX; i >= 0; i--) minrhs[i] = minr = min(minr, nums[i]);
        for (int i = 0,     maxl = INT_MIN; i < n;  i++) maxlhs[i] = maxl = max(maxl, nums[i]);

        int i = 0, j = n - 1;
        while (i < n && nums[i] <= minrhs[i]) i++;
        while (j > i && nums[j] >= maxlhs[j]) j--;

        return j + 1 - i;
    }
};