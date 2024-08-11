class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int i=0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int> ans;
        while(i<nums1.size() && j<nums2.size()){
           if(nums1[i]<nums2[j]) i++;
           else if(nums2[j]<nums1[i]) j++;
           else{
            ans.insert(nums1[i]);
            i++;
            j++;
           }
        }
        return vector<int>(ans.begin(),ans.end());
    }
};