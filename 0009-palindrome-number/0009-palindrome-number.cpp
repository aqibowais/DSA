class Solution {
public:
    int recursive(int x, long long res){
        if(x==0) return res;
        res = res*10LL + x%10;
        return recursive(x/10, res);
    }
    bool isPalindrome(int x) {
        // Recursive approach
        if(x<0) return false;
        
        return recursive(x,0) == x;

        // long long result = 0;
        // long original = x;
        // if(x<0) return false;
        // while(x != 0){
        //     result = result*10 + x%10;
        //     x/=10;

        // }

        // return result == original;
    }
};