// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	
	vector<int>SolveQueris(string str, vector<vector<int>>Query) {
    
    int n = str.length();
    vector<vector<int>> arr(n, vector<int> (26, 0));
    vector<int> temp(26, 0);
    for(int i = 0; i < n; i++) {
        temp[str[i] - 'a']++;
        
        arr[i] = temp;
    }
    
    vector<int> ans;
    for(auto it: Query) {
        int l = it[0] - 1, r = it[1] - 1;
        
        int count = 0;
        for(int i = 0; i < 26; i++) {
            
            if(l == 0)
                count += (arr[r][i] != 0);
            else
                count += ((arr[r][i] - arr[l - 1][i]) != 0);
        }
        
        ans.push_back(count);
    }
    
    return ans; // Code here
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends