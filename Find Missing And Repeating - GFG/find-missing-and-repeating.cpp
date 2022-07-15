// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *vi=new int[2];
       vector<int> v(n+1,0); 
    for(int i=0;i<n;i++){
       v[arr[i]]+=1;
    }
    int a=0;
    int b=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==2){
            a=i;
        }
        if(v[i]==0){
            b=i;
        }
    }
    vi[0]=a;
    vi[1]=b;
    return vi;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends