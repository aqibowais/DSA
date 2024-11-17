class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int result = INT_MAX;
        int n = nums.size();
        deque<int> deq;
        vector<long long> sum(n,0);
        int j=0;
        sum[0] = nums[0];
        while(j<n){
            if(j!=0){
                sum[j] = sum[j-1] + nums[j];
            }
            if(sum[j]>=k) result = min(result,j+1);
            while(!deq.empty() && sum[j]-sum[deq.front()]>=k){
                result = min(result,j-deq.front());
                deq.pop_front();
            }
            while(!deq.empty() && sum[j]<=sum[deq.back()]){
                deq.pop_back();
            }
            deq.push_back(j);
            j++;


        }

        return (result==INT_MAX) ? -1 : result;
    }
};