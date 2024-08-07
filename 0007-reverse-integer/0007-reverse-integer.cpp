class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int sign = (x<0)?-1:1;
        x = abs(x);
        while(x>0){
           if (result > (INT_MAX - x % 10) / 10) {
                return 0; // Return 0 in case of overflow
            }
            result = result*10 + x%10;
            x/=10;
        }
        return sign*result;
    }
};