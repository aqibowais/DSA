class Solution {
    public int climbStairs(int n) {
        if(n<3) return n;
        Stack<Integer> stairs = new Stack<>();
        stairs.push(1);
        int curr = 2;
        while(n>2){
            curr = stairs.peek() + stairs.push(curr);
            n--;
        }
    return curr;
    }
}