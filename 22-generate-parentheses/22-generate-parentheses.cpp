class Solution {
public:
    vector<string> generateParenthesis(int n) {

        
        vector<string > ans;
        backtrack(ans,0,0,"",n);
        return ans;
        
        
    
    }
    void backtrack(vector<string>&ans,int open,int close,string s,int n){
        if(s.length()==n*2){
            ans.push_back(s);
            return;
        }
        if(open<n){
            backtrack(ans,open+1,close,s+"(",n);
        }
        if(close<open){
            backtrack(ans,open,close+1,s+")",n);
        }
            
    }
};