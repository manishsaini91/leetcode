class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int slow=nums[0];
       int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(fast!=slow){
            slow=nums[slow];
            
            fast=nums[fast];
        }
        return slow;
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++){
//             if(mp.count(nums[i]))
//                 return nums[i];
//             // else
//             mp[nums[i]]=1;
            
                
            
//         }
//         return 0;
    }
};