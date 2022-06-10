class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int dp=0;
        unordered_map<char,int> mp;
        int start=0;
        int ans=0;
        if(s.size()==1){
            return 1;
        }
        for(int end=0;end<s.size();end++){
            // cout<<s[end];
            if(mp.count(s[end])){
                // cout<<s[end];
                start=max(start,(mp[s[end]]+1));
                // cout<<start<<" ";
                
            }
            mp[s[end]]=end;
            ans=max(ans,end-start+1);
            // cout<<ans;
        }
        return ans;
    }
};