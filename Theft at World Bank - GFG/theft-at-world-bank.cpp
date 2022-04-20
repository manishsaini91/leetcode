// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
	   vector< vector<long double> > arr;
    
    int n = w.size();
    
    for(int  i = 0 ; i < n ; i ++)
    {
        double t = w[i];
        
        if(sqrt(t) - (int)(sqrt(t)) != 0)
        {
            arr.push_back({1.0 * p[i]/w[i] , p[i] , w[i]});
        }
    }
    
    sort(arr.begin() , arr.end());
    
    reverse(arr.begin() , arr.end());
    
    long double sum = 0;
    
    for(vector<long double> s : arr)
    {
        if(C == 0) break;
        if(s[2] <= C)
        {
            C -= s[2];
            sum += s[1];
        }
        else
        {
            sum += s[0] * C;
            C = 0;
        }
    }
    
    
    return sum; // Code here.
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends