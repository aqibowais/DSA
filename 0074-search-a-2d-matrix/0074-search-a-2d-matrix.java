class Solution {
    public boolean searchMatrix(int[][] mat, int X) {
        boolean DTD = false;
        int N=mat.length;
        int M=mat[0].length;
	   for(int i=0;i<N;++i){
	       for(int j=0;j<M;++j){
	           if(mat[i][j]==X){
	               DTD=true;
	           }
	       }
	   }
	   return DTD;
    }
}