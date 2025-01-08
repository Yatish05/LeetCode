class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            if (n == INT_MIN) { // Handle INT_MIN edge case
                return 1 / (myPow(x, INT_MAX) * x);
            }
            return 1 / myPow(x, -n);
        }
        
        double ans = myPow(x, n / 2);
        
        if (n % 2 == 0) {
            return ans * ans;
        } else {
            return x * ans * ans;
        }
    }
};
