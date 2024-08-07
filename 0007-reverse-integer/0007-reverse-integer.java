class Solution {
    public int reverse(int x) {
       if(x >= -9 && x <= 9) return x;
       else return reverseInteger(x);
 }
    public int reverseInteger(int x){
        Boolean isNeg = x<0;
        x = Math.abs(x);
        long res = 0;
        while(x>0){
            res = res*10 + x%10;
            x/=10;
        }
        if(isNeg) res = -res;
        if(res > Integer.MAX_VALUE || res < Integer.MIN_VALUE) return 0;
        return (int)res;
    }
}