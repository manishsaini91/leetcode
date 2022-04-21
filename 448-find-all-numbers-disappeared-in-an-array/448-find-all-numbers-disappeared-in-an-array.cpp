class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // int mini=*min_element(nums.begin(),nums.end());
        vector<int> v;
        int maxi=*max_element(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
        for(int i=1;i<=nums.size();i++){
            if(!(mp.count(i))){
                v.push_back(i);
            }
        }
        return v;
    }
};