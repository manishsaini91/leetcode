class Solution {
public:
    long long divide(long long dividend, long long divisor) {
        if (dividend < divisor)
            return 0;
        
        long long sum = divisor;
        long long multiple = 1; // 1 2 4 8 16 32 64...
        while ((sum + sum) <= dividend) {
            sum += sum;
            multiple += multiple;
        }
        
        return multiple + divide(dividend - sum, divisor);
    }
    
    int divide(int dividend, int divisor) {
        bool positive = (dividend >= 0 == divisor > 0);
        
        long long ldividend = abs((long long) dividend);
        long long ldivisor = abs((long long) divisor);
        long long lres = divide(ldividend, ldivisor);
        if (lres > INT_MAX) {
            lres = positive ? INT_MAX : INT_MIN; 
        } else {
            lres = positive ? lres : -lres;
        }
        
        return lres;
    }
};