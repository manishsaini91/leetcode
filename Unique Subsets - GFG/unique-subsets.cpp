// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
     set<vector<int>> ans;
    void solve(vector<int> arr, int i,vector<int> &temp, unordered_map<int,int> &freq, int n) {
        if(i == n) {
            ans.insert(temp);
            return;
        }
        
        auto it = freq.find(arr[i]);
        
        if(it->second) {
            it->second -= 1;
            temp.push_back(it->first);
            solve(arr, i+1, temp, freq, n);
            temp.pop_back();
            it->second += 1;
            solve(arr, i+1, temp,freq, n);
        }
        
    }
    
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(), arr.end());
        unordered_map<int,int> freq;
        
        for(int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }
        
        vector<int> temp;
        solve(arr,0,temp,freq, n);
        
        vector<vector<int>> res;
        for(auto x: ans) {
            res.push_back(x);
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends