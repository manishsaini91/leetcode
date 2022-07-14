class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map <int,int> mp;
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     if(mp[nums[i]]){
        //         ans.push_back(nums[i]);
        //     }
        //     mp[nums[i]]=1;           
        // }
        // return ans;
        vector<int> ans;
        // nums[0]=-1;
        for(int i=0;i<nums.size();i++){
            int s=abs(nums[i]);
            if((nums[s-1])>0){
                nums[s-1]*=-1;
            }
            else{
                ans.push_back(s);
            }
        }
        return ans;
        
    }
};