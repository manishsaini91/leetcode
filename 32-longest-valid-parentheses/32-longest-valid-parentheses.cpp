class Solution {
public:
    int longestValidParentheses(string s) {
        int l=s.length();
        vector <int> a(l+1,0);
        
        int j=0;
        for(int i=0;i<l;i++){
             j=(i-a[i]-1);
            
            if(s[l-1]=='('){
                a[i+1]=0;
            }
                
            if(j>=0 && s[j]=='(' && s[i]==')'){
               a[i+1]=a[j]+a[i]+2;
                
           }
           
        }
        int max=*max_element(a.begin(), a.end());
        return max;
        
    }

};