class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int crnt =0;
        int next= 1;
        if(nums.size()==0) return -1;
        if(nums.size()==1){
            return 1;
        }
        for(int i=0;i<nums.size();i++){
            if(next<nums.size() && nums[crnt]!=nums[next] ){
                nums[++crnt]=nums[next];
            } 
            //else if(next<nums.size() && nums[next]==nums[crnt]  ) next++;
           // else break;
           next++;
        }
        return crnt+1;
    }
};

//100% beats solution