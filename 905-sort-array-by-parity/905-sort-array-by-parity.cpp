class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        for(int i=0;i<j;){
            if(nums[i]%2==0){
                i++;
            }
            else if(nums[i]%2!=0){
                swap(nums[i],nums[j]);
                j--;
            }
        }
        return nums;
    }
};