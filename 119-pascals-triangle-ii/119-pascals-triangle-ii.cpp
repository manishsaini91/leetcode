class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        for(int i=1;i<=rowIndex;i++){
            vector<int> temp;
            temp.push_back(1);
            int length=ans.size() ;
            if(length>1){
            for(int j=0;j<ans[length-1].size()-1;j++){
               temp.push_back(ans[length-1][j]+ans[length-1][j+1]); 
            }}
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans[rowIndex];
    }
};