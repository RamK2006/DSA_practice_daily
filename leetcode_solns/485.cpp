class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,mxcnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) ++cnt;
            else{
                mxcnt= max(cnt,mxcnt);
                cnt=0;
            }
            mxcnt= max(cnt,mxcnt);
        }
        return mxcnt;
    }
};
//100% beats again and 92 percent memory beats