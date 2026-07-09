class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int a=nums[0];
        for(int i=1;i<nums.size();i++){
            a^=nums[i];
        }
        return a;
    }
};
//100% beats in runtime and 52% beats in memory