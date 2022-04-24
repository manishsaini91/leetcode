// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool primecheck(long long n){
         if(n<=1) return false;
         if(n==2 || n==3) return true;
         if(n%2==0 || n%3==0) return false;
         for(int i=5;i*i<=n;i+=6){
             if(n%i==0 || n%(i+2) ==0) return false;
         }
         return true;
    }
   long long primeProduct(long long L, long long R){
         
         long long product=1;
         for(int i=L ;i<=R; i++){
             if(primecheck(i)){
             product = (  (product%1000000007) * (i%1000000007) )%1000000007;
             }
         }
         return product;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends