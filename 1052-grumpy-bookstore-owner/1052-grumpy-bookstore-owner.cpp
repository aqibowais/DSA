class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int currUnsat = 0;
        for(int i=0; i<minutes; i++){
            currUnsat += customers[i]*grumpy[i]; 
        }

        int maxUnsat = currUnsat;
        int i = 0;
        int j = minutes;
        while(j<customers.size()){
            currUnsat += customers[j]*grumpy[j]; //extending window from front
            currUnsat -= customers[i]*grumpy[i]; //will remove window from back
            maxUnsat = max(maxUnsat,currUnsat);
            i++;
            j++;
        } 

        // now calc total satisfied customer
        int total = maxUnsat;
        for(int i=0; i<customers.size(); i++){
            //smarter approach
            total += customers[i]*(1-grumpy[i]);
            // if(grumpy[i]==0){
            //     total += customers[i];
            // }
            
        }
        return total;
    }
};