class Solution {
    public int reverse(int x) {
      if(x>=-9 && x<=9) return x;
      else return reverseInteger(x);
    }
    public int reverseInteger(int x){
        boolean isNeg = x<0;
        x = Math.abs(x);
        long result = 0;
        while(x>0){
            result = result*10 + x%10;
            x/=10;
        }
        if(isNeg) result = -result;
        if(result > Integer.MAX_VALUE || result < Integer.MIN_VALUE) return 0;
        return (int)result;
    }
}