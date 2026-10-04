class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> s;
        int ans=0;
        for(int a:nums1){
            for(int b:nums2){
                int sum=a+b;
                s[sum]++;
            }
        }
        for(int a:nums3){
            for(int b: nums4){
                int sum_c = -(a+b);
                if(s.count(sum_c)) ans+= s[sum_c];
            }
        }
        return ans;
    }
};
// that is a classic one, yes, i got guided for this one 