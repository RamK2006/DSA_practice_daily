class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int cnt=0;
        while(cnt<nums.size() && l<nums.size() ){
            if(nums[l]==0){
                nums.erase(nums.begin()+l);
                nums.push_back(0);
            }
            else l++;
            cnt++;
        }
    }
};
//only 7.7% beats on this one yet
//method two for same question:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int cnt=0;
        while(i<nums.size()){
            if(nums[i]==0){
                cnt++;
                nums.erase(nums.begin()+i);
            }
            else i++;
        }
        while(cnt--){
            nums.push_back(0);
        }
    }
};

//now best approach:

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i++],nums[j]);
            }
        }
        while(i<nums.size()){
            nums[i++]=0;
        }
    }
};

//upar wali ka better version
