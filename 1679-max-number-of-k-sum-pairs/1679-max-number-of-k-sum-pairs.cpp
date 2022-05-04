class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // vector<int> v;
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     v.push_back(nums[i]);
        // }
         int ans=0;
        // for(auto itt=v.begin();itt!=v.end();itt++){
        //     auto it=find(v.begin(),v.end(),k-*itt);
        //     if(it!=v.end()){
        //         v.erase(it);
        //         v.erase(itt);
        //         ans++;
        //     }
        // }
        // return ans;
        unordered_map<int,int> mp;
        // for(auto i:nums){
            
        // }
        
        for(int i=0;i<n;i++){
            int f=k-nums[i];
            if(mp[f]>0){
                ans++;
                mp[f]--;
                
            }
            else{
                mp[nums[i]]++;
            }
        }
        return ans;
    }
};