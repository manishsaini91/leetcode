class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=0;
        int flag=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
                // flag=1;
                break;
            }
            else if(target<nums[mid]){
                // ans=mid-1;
                high=mid-1;
            }
            else if(target>nums[mid]){
                // ans=mid+1;
                low=mid+1;
            }
           
        }
        return low;
    }
};