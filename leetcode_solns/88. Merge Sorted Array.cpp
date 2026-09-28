class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int f_ptr=m-1;
        int s_ptr=n-1;
        int size=m+n;
        int b_ptr= size-1;
        for(int i=0;i<size;i++){
            if(f_ptr >= 0 && s_ptr >= 0){
                if(nums1[f_ptr]<nums2[s_ptr]){
                    swap(nums1[b_ptr], nums2[s_ptr]);
                    b_ptr--;
                    s_ptr--;
                } else {
                    swap(nums1[b_ptr], nums1[f_ptr]);
                    b_ptr--;
                    f_ptr--;
                }
            }
            else if(f_ptr<0){
                while(s_ptr>=0){
                    nums1[b_ptr--]=nums2[s_ptr--];
                }
            }
            
        }
    }
};
// 100% beats in the first try lessgo