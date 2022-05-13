// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
             map<int,int> m;
          
           
           int r=0;
           
           vector<int>v;
           vector<int> ans;
           
           
           for(int i=0;i<n;i++)
           {
               m[arr1[i]]++;
           }
           
           
             for(int i=0;i<n;i++)
           {
               m[arr2[i]]++;
           }
           
         
           
           
           for(auto&pr:m)
           {
               v.push_back(pr.first);
       
               
              
           }
           
              reverse(v.begin(),v.end());
              
           
              
              vector<int> v2;
              
              map<int,int> m3;
              
              for(int i=0;i<n;i++)
              {
                  m3[v[i]]=1;
              }
              
              
           
           
              
             
            
              
              for(int i=0;i<n;i++)
              {
                  if(m3.find(arr2[i])!=m3.end()&&m3[arr2[i]]<=1)
                  {
                      v2.push_back(arr2[i]);
                      m3[arr2[i]]++;
                      
                  }
                  
              }
             
              
              
              for(int i=0;i<n;i++)
              {
                  if(m3.find(arr1[i])!=m3.end()&&m3[arr1[i]]<=1)
                  {
                      v2.push_back(arr1[i]);
                    
                       m3[arr1[i]]++;
                      
                    
                  }
                
              }
              
             
           
           
        
           
           
           return v2;// code here 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maximizeArray(arr1, arr2, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends