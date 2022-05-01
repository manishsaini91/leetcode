class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        // int m=n/2;
        int flag;
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(!mp[nums[i]])
                mp[nums[i]]=1;
            else{
                mp[nums[i]]++;   
            }
            
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>n/2){
                flag=nums[i];
                break;
            }
        }
        return flag;
    }
};