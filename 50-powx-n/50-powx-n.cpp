class Solution {
public:
    double myPow(double x, long n) {
        if (n==0) return 1;
        double t = pow(x,n/2);
        if (n%2) {
            return n<0 ? 1/x*t*t : x*t*t;
        } else {
            return t*t;
        }
    }
};