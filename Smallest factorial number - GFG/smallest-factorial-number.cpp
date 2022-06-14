// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
       int findNum(int n) {
     int low = 5, high = n * 10;
     while (low <= high){
     int mid = (low + high) / 2, u = utility(mid);
     if (u < n) low = mid + 1;
     else high = mid - 1;
     }
     return low;
}
int utility(int n) {
    int count = 0, x = 5;
    while (n / x > 0) {
       count += n/x;
       x *= 5;
    }
    return count;
}
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends