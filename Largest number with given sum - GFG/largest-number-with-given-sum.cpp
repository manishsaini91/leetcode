// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
         string ans = "";
       
       while(sum >= 9){
           sum = sum-9;
           ans += '9';
       }
       
       if(sum > 0){
           ans += to_string(sum);
       }
       
       if(ans.size() == n){
           return ans;
       }
       if(ans.size() > n){
           return "-1";
       }
       while(ans.size() < n) ans += '0';
       
       return ans;// Your code here
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends