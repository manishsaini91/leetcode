class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        if (n==0) return 0;
        if(n==1) return 1;
        if(n==2 and s[0]==s[1]) return 3;
        int count=0;
        vector<vector<int>> ans(s.size(),vector<int>(n));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(i==j)
                    ans[i][j]=1;
                else if((s[i]==s[j] and ans[i+1][j-1])||( j-i==1 and s[i]==s[j])){
                    ans[i][j]=1;
                }
                count+=ans[i][j];
            }
            
        }
        return count;
    }
};