class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if( i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                if( j>i+1 && nums[j]==nums[j-1]) continue;
                int l=j+1;
                int r=nums.size()-1;
                while(l<r){
                    long sum=(long)nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target){
                        s.push_back({nums[i],nums[j],nums[l],nums[r]});
                        while(l<r && nums[l]==nums[l+1]) l++;
                        while(l<r && nums[r]==nums[r-1]) r--;
                        l++;
                        r--;
                    }else if(sum<target){
                        l++;
                    }else if(sum>target){
                        r--;
                    }
                }
            }
        }
        return s;
    }
};

//somehow solved, itni chize haina mind me rkhne ke liye sch me bhai