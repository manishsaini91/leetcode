class Solution {
public:
 int climbStairs(int n) {
        vector<int>v(n+1,-1);
        return myfunc(n,v);
    }
    
    int myfunc(int n,vector<int>&v){
        if(n==1 || n==0)
            return 1;
        if(v[n]!=-1)
            return v[n];
        
        int output = myfunc(n-1,v) + myfunc(n-2,v);
        v[n] = output;
        return v[n];
    }
};