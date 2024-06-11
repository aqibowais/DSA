class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        int max = 0;
        for(int i=0; i<arr1.length; i++){
            max = Math.max(max,arr1[i]);
        }
        int[] freq = new int[max+1];
        for(int i=0; i<arr1.length;i++){
            freq[arr1[i]]++;
        }
        int[] res = new int[arr1.length];
        int j=0;
        for(int i=0; i<arr2.length;i++){
            while(freq[arr2[i]]>0){
                res[j] = arr2[i];
                j++;
                freq[arr2[i]]--;
            }
        }
        for(int i=0; i<max+1;i++){
             while(freq[i]>0){
                res[j] = i;
                j++;
                freq[i]--;
            }
        }
        return res;
    }
}