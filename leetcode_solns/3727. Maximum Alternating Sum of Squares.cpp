class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) nums[i]=nums[i]*nums[i];
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        long long int ans=0;
        while(l<r){
            ans+=(long)nums[r];
            ans-=(long)nums[l];
            l++;
            r--;
        }
        if(l==r) ans+= nums[l];
        return ans;
    }
};

// no need to explain,
//daily question, potd 12 OCT