class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int crnt=nums[0];
        int frq=1;
        for(int i=1;i<nums.size();i++){
            if(crnt==nums[i]){
                frq++;
                if(frq> nums.size()/2) return nums[i];
            }
            else{
                crnt=nums[i];
                frq=1;
            }
        }
        return nums[0];
    }
};
//28% beats