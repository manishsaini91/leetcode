// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
          for(int i=0; i<N; i++ ){
           
           if(k==Arr[i]) return i;
           
       }
      
      
      Arr.push_back(k);
      
      sort(Arr.begin(),Arr.end());
          for(int i=0; i<N; i++ ){
           
           if(k==Arr[i]) return i;
           
       }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends