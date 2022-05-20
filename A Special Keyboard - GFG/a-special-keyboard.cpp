// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string S1, string S2) {
        // code here
        char cur=S1[0];
       unordered_map<char,int> m;
       for(int i=0;i<S1.size();i++)
           m[S1[i]]=i;
       int c=0;
       for(int i=0;i<S2.size();i++)
       {

           c+=abs(m[cur]-m[S2[i]]);
           cur=S2[i];
       }
       return c;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends