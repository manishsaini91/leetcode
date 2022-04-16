// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
   int square(int n){
        return n * n;
    }
    
    int helper(vector<int>&word, int n, int length, int wordIndex, int remLength, vector<vector<int>>&dp){
        //We are at the last word
        if(wordIndex == n - 1){
            //If there is required space left in the currline
            if(word[wordIndex] < remLength){
                return 0;
            }
            //Otherwise insert it in the next line and return the cost which is square of white space
            return square(remLength);
        }
        
        if(dp[wordIndex][remLength] != -1)
            return dp[wordIndex][remLength];
        
        int currWord = word[wordIndex];
        
        //If word can fit in the remaining line
        if(currWord < remLength){
            /*
            Case 1: Insert it in the same line
            (remLength == length) ==> 
            whether we are putting the first word in the line
                -> If this is the case then we dont need to add one extra space
            or we are putting next word in the same line
                -> If this is the case then we need to insert extra space between
                the two words.
            */
            int insert = helper(word, n, length, wordIndex + 1, remLength == length 
                                    ? remLength - currWord : remLength - currWord - 1, dp);
                                    
            //Case 2: Insert it in the next line.
            int dontInsert = square(remLength) + helper(word, n, length, wordIndex + 1, length - currWord, dp);
            
            return dp[wordIndex][remLength] = min(insert, dontInsert);
        }
        
        //We don't have any choice so insert the word in the next line.
        return dp[wordIndex][remLength] = square(remLength) + helper(word, n, length, wordIndex + 1, length - currWord, dp);
    }

    int solveWordWrap(vector<int>nums, int k){
        vector<vector<int>>dp(nums.size(), vector<int>(k + 1, -1));
        return helper(nums, nums.size(), k, 0, k, dp);
    } 
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}  // } Driver Code Ends