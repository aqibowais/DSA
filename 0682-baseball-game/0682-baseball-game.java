class Solution {
    public int calPoints(String[] operations) {
        int[] score = new int[operations.length];
        int size = 0;
        for(String op : operations){
            if(op.equals("+")){
                score[size] = score[size-1] + score[size-2];
                size++;
            }
            else if(op.equals("D")){
                score[size] = 2*score[size-1];
                size++;
            }
            else if(op.equals("C")){
                size--;
            }
            else{
                score[size] = Integer.parseInt(op);
                size++;
            }
        }
        int sum = 0;
        for(int i=0; i<size; i++){
            sum += score[i];
        }
        return sum;
    }
}