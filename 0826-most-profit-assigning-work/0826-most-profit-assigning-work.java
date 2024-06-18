class Solution {
     class Job {
        int difficulty;
        int profit;

        Job(int difficulty, int profit) {
            this.difficulty = difficulty;
            this.profit = profit;
        }
    }
    public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
        Job[] jobs = new Job[difficulty.length];
        for(int i=0;i<difficulty.length;i++){
            jobs[i] = new Job(difficulty[i],profit[i]);
        }
        Arrays.sort(jobs,(a,b) -> a.difficulty - b.difficulty);
        Arrays.sort(worker);
        int j=0;
        int maxProf = 0;
        int best = 0;
        for(int ability : worker){
            while(j<jobs.length && ability >= jobs[j].difficulty){
                best = Math.max(best,jobs[j].profit);
                j++;
            }
            maxProf += best;
        }
        return maxProf;
    }

}