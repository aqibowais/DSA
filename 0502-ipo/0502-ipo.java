class Solution {
    public int findMaximizedCapital(int numProj, int initCapital, int[] profits, int[] capital) {
        int projIndex = 0;
        int totalProj = profits.length;
        List<int[]> projects = new ArrayList<>();
        for(int i = 0; i<totalProj; i++){
            projects.add(new int[]{capital[i],profits[i]});

        }
        projects.sort(Comparator.comparingInt(a -> a[0]));

        PriorityQueue<Integer> maxProfitHeap = new PriorityQueue<>(Collections.reverseOrder());
        for(int currProj = 0; currProj<numProj; currProj++){
            while(projIndex < totalProj && projects.get(projIndex)[0] <= initCapital){
                maxProfitHeap.add(projects.get(projIndex)[1]);
                projIndex++;
            }
            if(maxProfitHeap.isEmpty()){
                return initCapital;
            }
            initCapital += maxProfitHeap.poll();
        }
        return initCapital;

    }
}