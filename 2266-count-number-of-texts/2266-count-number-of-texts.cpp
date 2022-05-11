class Solution {
public:
    int countTexts(string s) {
        int n=s.size();
        vector<long> dp(n+1);
        int mod=1000000007;
        dp[0]=1;
        for(int i=1;i<=n;i++){
            char ch=s[i-1];
            dp[i]=dp[i-1];
            if(i>=2 and s[i-2]==ch){
                dp[i]=(dp[i]+dp[i-2])%mod;
            }
            else
                continue;
            
                if(i>=3 and s[i-3]==ch)
                    dp[i]=(dp[i]+dp[i-3])%mod;
                else
                    continue;
                if((ch=='7'||ch=='9')and (i>=4 and s[i-4]==ch)){
                    dp[i]=(dp[i]+dp[i-4])%mod;
                }
                    
            
            
            }
            
        
        return dp[n]%mod;
        
    }
};