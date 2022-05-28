// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Complete the function
// n: Input n
// Return true if the given number is a lucky number else return False




bool isluckynum ( int n , int i)
{
    if ( n % i == 0 )
    return false;
    if ( i > n)
    return true ;
    isluckynum (n- n/i , i+1) ;
}


bool isLucky(int n) {
   isluckynum(n,2) ;
}

// { Driver Code Starts.

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        //calling isLucky() function
        if(isLucky(n))
            printf("1\n");//printing "1" if isLucky() returns true
        else
            printf("0\n");//printing "0" if isLucky() returns false
    }
    
}  // } Driver Code Ends