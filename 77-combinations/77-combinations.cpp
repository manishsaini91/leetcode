class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcomb(ans,0,ds,n,k,0);
        return ans;
    }
    void findcomb(vector<vector<int>>& ans,int ind,vector<int> &ds,int n,int k,int start){
          if(ds.size()==k){
                ans.push_back(ds);
                return;
            }
        for(int i=start;i<n;i++){
           
           
            ds.push_back(i+1);
            findcomb(ans,ind,ds,n,k,i+1);
            ds.pop_back();
        }
    }
};