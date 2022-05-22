// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        vector<pair<size_t, int>> hit;

// check if it is a valid replacement
for (int i = 0; i < Q; ++i)
	if (S.find(sources[i], index[i]) == index[i])
		hit.push_back({index[i], i});

// we have to start from the end of the string to avoid messing the index.
sort(begin(hit), end(hit), greater<>());

// perform the replacement
for (auto &h : hit)
	S.replace(S.find(sources[h.second], h.first), sources[h.second].size(), targets[h.second]);

return S;// code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends