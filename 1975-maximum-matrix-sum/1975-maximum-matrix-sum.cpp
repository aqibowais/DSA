class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int isOdd = 0;
        int mini = INT_MAX;
        long long sum = 0; 
        for(auto& row : matrix){
            for(int val : row){
                if(val<0) isOdd = !isOdd;
                mini = min(mini,abs(val));
                sum += abs(val);
            }
        }
        return sum - 2*(isOdd)*mini;
    }
};