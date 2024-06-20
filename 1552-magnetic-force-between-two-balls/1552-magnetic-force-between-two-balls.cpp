class Solution {
public:
    bool possibleToPlace(int force, vector<int>& position, int m){
        int prev = position[0];
        int count = 1;
        for(int i=1; i<position.size(); i++){
            int curr = position[i];
            if(curr-prev >= force){
                count++;
                prev = curr;
            }
            if(count == m) break;
        }
        return count == m;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int minF = 1;
        int maxF = position[position.size()-1] - position[0];
        int result = 0;
        while(minF<=maxF){
            int midF = minF + (maxF - minF)/2;
            if(possibleToPlace(midF,position,m)){
                result = midF;
                minF = midF + 1;
            }else{
                maxF = midF - 1;
            }
        }
        return result;
    }
};