class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
           int n=nums.size();
        vector<int>ds;
        vector<vector<int> > ans;
        helper(nums,0,ans,n,ds,0);    
        return ans;
    }
    int flag=INT_MAX;
    
    void helper(vector<int>&nums,int ind,vector<vector<int>> &ans,int n,vector<int> &ds,int start){
        if(ds.size()==n){
            ans.push_back(ds);
            // ind=0;
            return;
        }
        for(int i=0;i<n;i++){
            // vector<int> ds;
            auto it=find(ds.begin(),ds.end(),nums[i]);
            if(!(it!=ds.end())){
                // flag=i;
                ds.push_back(nums[i]);
                helper(nums,i+1,ans,n,ds,i+1);
                ds.pop_back();
            }  
        }
    }
};