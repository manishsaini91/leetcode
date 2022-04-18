class Solution {
public:
    bool isMatch(string s, string p) 
    {
    //      int m = p.length() , n = s.length();
    //     vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    //     dp[0][0] = 1; // Empty string matches empty string
    //     for(int i = 1 ; i <= m ; ++i)
    //     {
    //         if(p[i-1] == '*')
    //             dp[i][0] = dp[i-1][0]; // Any number of * matches empty string // E.g : ** and ''
    //     }
    //     // Note that we are using 0-based indexing for strings and in the dp table 0th positon indicates empty string hence we are checking for p[i-1] && s[j-1]
    //     for(int i = 1 ; i <= m ; ++i)
    //     {
    //         for(int j = 1 ; j <= n ; ++j)
    //         {
    //             if(p[i-1] == s[j-1] || p[i-1] == '?') // If the ith character of p and jth character of s is same or ith character of p is '?' then exclude ith and jth characters of p and s and check whether the rest of the strings upto (i-1)th in p and (j-1)th in s are matching E.g : ab and ab or ab and a?
    //                 dp[i][j] = dp[i-1][j-1];
    //             else // if p[i-1] != s[j-1]
    //                 if(p[i-1] == '*')
    //                 {
    //                     dp[i][j] = dp[i-1][j] || dp[i][j-1]; // If ith character of p is '*' then we have two choices : 1) make it null character in which case we check whether string upto (i-1)th character in p and upto jth character in s are matched E.g : ab and ab* 2) match the jth character in s in which case we check whether the string upto ith character in p and (j-1) th character in s are matched E.g : abcd and ab*
    //                 }
    //         }
    //     }
    //     return dp[m][n]; // If both the strings were fully matched
        int n=s.size();
        int m=p.size();
        bool dp[n+1][m+1];
        memset(dp,false,sizeof(dp));
        dp[0][0]=1;
         for(int i = 1 ; i <= m ; ++i)
        {
            if(p[i-1] == '*')
                dp[0][i] = dp[0][i-1]; // Any number of * matches empty string // E.g : ** and ''
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                // if(i==0 || j==0) {
                    // dp[i][j]=false;
                    // dp[0][0]=1;
                // }
                 if(p[j-1]=='?'|| s[i-1]==p[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else if(p[j-1]=='*')
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                // else
                    // dp[i][j]=false;
            }
        }
        return dp[n][m];
    }
};