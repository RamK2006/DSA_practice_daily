class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};
// this is not allowed but satisfies best solution , prefer not to use it

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
//isse behtar kuch hai, wo hai german flag problem, and it is here


class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n= arr.size();
        int lo=0,mid=0,hi=n-1;
       while(mid<=hi){
            if(arr[mid]==1) mid++;
            else if(arr[mid]==0){
                swap(arr[lo],arr[mid]);
                mid++;
                lo++;
            }
            else{
                swap(arr[mid],arr[hi]);
                    hi--;
                    //mid++;
                }
            }
        }
};

// it includes 100% beats for sure 