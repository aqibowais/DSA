class Solution {
public:
    bool isPrime(int n){
        if(n==1)return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        ios_base::sync_with_stdio();
        cin.tie(NULL);
        cout.tie(NULL);
        int res = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j && isPrime(nums[i][j])) res = max(res,nums[i][j]);
                if(j==nums.size()-i-1 && isPrime(nums[i][j])) res = max(res,nums[i][j]);
            }
        }
        return res;
    }
};
