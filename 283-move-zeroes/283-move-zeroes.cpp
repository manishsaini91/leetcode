class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        
        int j=1;
        for(int i=0;j<n;){
            if(nums[i]==0 and nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[i]==0 and nums[j]==0){
                j++;
            }
            else {
                i++;
                j++;
            }
        }
    }
};