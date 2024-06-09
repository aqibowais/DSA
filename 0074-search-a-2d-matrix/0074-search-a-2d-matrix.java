class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        boolean found = false;
        for(int row=0; row < matrix.length; row++){
            for(int col=0;  col<matrix[0].length; col++){
                if(matrix[row][col]==target){
                    found = true;
                }
            }
        }
        return found;
    }
}