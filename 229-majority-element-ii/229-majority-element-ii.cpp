class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        
        if(n==1) {
            v.push_back(nums[0]);
            return v;
        } 
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(!mp[nums[i]])
                mp[nums[i]]=1;
            
            else{
                mp[nums[i]]++;
               
            }
            
        }
    for(auto i:mp){
        if(i.second>n/3)
            v.push_back(i.first);
    }
        return v;
    }
};