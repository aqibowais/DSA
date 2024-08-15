class Solution {
public:
    int addDigits(int n) {
        if (n < 10) {
                return n;
                  } else {
                      return addDigits(n % 10 + (n / 10));
                        }
        
    }
};