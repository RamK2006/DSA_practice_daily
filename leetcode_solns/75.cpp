class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};
// this is not allowed but best solution

// what you must write
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt_0=0;
        int cnt_1=0;
        int cnt_2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt_0++;
            else if(nums[i]==1) cnt_1++;
            else cnt_2++;
        }
        int i=0;
        while(cnt_0--){
            nums[i++]=0;
        }
        while(cnt_1--){
            nums[i++]=1;
        }
        while(cnt_2--){
            nums[i++]=2;
        }
    }
};
//isse behtar kuch nahi