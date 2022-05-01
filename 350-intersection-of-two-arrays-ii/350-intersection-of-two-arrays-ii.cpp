class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int ,int> mp;
        for(int i=0;i<n;i++){
            if(mp[nums1[i]])
                mp[nums1[i]]++;
            else
                mp[nums1[i]]=1;
        }
        for(int i=0;i<m;i++){
            if(mp[nums2[i]] and mp[nums2[i]]!=0){
                mp[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};