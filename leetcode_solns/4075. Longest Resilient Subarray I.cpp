class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n= nums.size();
        for(int i=0;i<n;i++) nums[i]%=k;
        int i=0;
        int ans=0;
        while(i<n){
            int curr= nums[i];
            int s=0;
            int sum=0;
            int prev=i;
            while(i<n && curr==nums[i]){
                sum+= nums[i];
                if(sum%k==curr) s= max(s, i-prev+1);
                i++;
            }
            ans= max(ans,s);
        }
        return ans;
    }
};


//thanks to suraj for helping this one, good ques