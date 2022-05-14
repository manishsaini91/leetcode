// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
int MaxGold(vector<vector<int>>&matrix){
    int l = matrix.size();
   int s = matrix[0].size();
   
   for(int j=0;j<s;j++)
    {
        if(matrix[l-1][j]==-1)
           matrix[l-1][j] = 0;
    }
   
   for(int i=l-2;i>=0;i--){
       for(int j=0;j<s;j++){
          
           if(matrix[i][j]==-1)
              matrix[i][j] = 0;
           else{
           int d = matrix[i+1][j];
           int d_left = j==0 ? 0 : matrix[i+1][j-1];
           int d_right = j==s-1 ? 0 : matrix[i+1][j+1];
            
           matrix[i][j] =   matrix[i][j] + max(d,max(d_left,d_right));
           } 
       }
   }
   int mx=INT_MIN;
   for(int j=0;j<s;j++)
   mx = max(mx,matrix[0][j]);
   
   return mx;// Code here
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>matrix(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		int ans = obj.MaxGold(matrix);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends