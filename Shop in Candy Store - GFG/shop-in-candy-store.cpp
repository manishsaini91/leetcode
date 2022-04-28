// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
// int flag=0;
    vector<int> candyStore(int candies[], int n, int k)
    {
        int ans=0;
        vector<int> ans2;
        // if(flag==0){
            sort(candies,candies+n);
            // flag=1;
        // }
        // else
            // sort(candies,candies+n,greater<int>());
        int i=0;int j=n;
        while(i<j){
            ans=ans+candies[i];
            j=j-k;
            i++;
            
            // if(j>=k)
        }
         ans2.push_back(ans);
         ans=0;
         sort(candies,candies+n,greater<int>());
         i=0; j=n;
        while(i<j){
            ans=ans+candies[i];
            j=j-k;
            i++;
            
            // if(j>=k)
        }
        //  candyStore(candies,n,k);
         ans2.push_back(ans);
         return ans2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends