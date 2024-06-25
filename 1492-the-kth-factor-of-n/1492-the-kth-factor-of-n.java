class Solution {
    public int kthFactor(int n, int k) {
        ArrayList<Integer> arr = new ArrayList<>();
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
               arr.add(i);
                if(n/i != i){
                    arr.add(n/i);
                }
            }
        }
        Collections.sort(arr);
        return (k > arr.size()) ? -1 : arr.get(k-1);
    }
}