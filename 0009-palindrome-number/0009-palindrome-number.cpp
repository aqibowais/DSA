class Solution {
public:
    bool isPalindrome(int x) {
        long result = 0;
        int original = x;
        if(x<0) return false;
        while(x){
            result = result*10 + x%10;
            x/=10;

        }
        if(result>INT_MAX || result<INT_MIN) return false;
        return result == original;
    }
};