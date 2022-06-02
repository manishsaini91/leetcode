// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
void rat(vector<vector<int>>&db,vector<vector<int>>&m,int i, int j, int moves,int &flag)
   {
       if(i==(m.size()-1)&&j==(m.size()-1))
       {
           flag=1;
           // cout<<flag<<"\n";
           return;
       }
   
       if(i>=m.size()||j>=m.size())
       {
           return;
       }
   
       if(m[i][j]<=0)
       {
           return;
       }
       
       moves=m[i][j];
       
       // cout<<i<<j<<"\n";
       
       for(int x=1;x<=moves;x++)
       {
           db[i][j]=-db[i][j];
           
           rat(db,m,i,j+x,moves-x,flag);
           
           if(flag==0)
           db[i][j]=-db[i][j];
           else
           return;
           
           db[i][j]=-db[i][j];
           rat(db,m,i+x,j,moves-x,flag);
           if(flag==0)
           db[i][j]=-db[i][j];
           else
           return;
           
           
       }
       
       
       
       
       
   }

vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
   
   int flag=0;
       vector<vector<int>> db=matrix;    
       vector<vector<int>> out(1,vector<int>(1,-1));
       rat(db,matrix,0,0,0,flag);
       
       // cout<<flag;
       
       if(flag==0)
       return out;
    
    
    for(int i=0;i<db.size();i++)
    {
        for(int j=0;j<db.size();j++)
        {
            if(db[i][j]<0)
            db[i][j]=1;
            else
            db[i][j]=0;
            
        }
    }
    
    db[db.size()-1][db.size()-1]=1;
    
    return db;
    
    
    
    
    
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends