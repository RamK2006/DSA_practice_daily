class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1= nums1.size();
        int l2= nums2.size();
        int p1=0,p2=0;
        int mdn1=0,mdn2=0;
        for(int i=0;i<=(l1+l2)/2;i++){
            mdn2=mdn1;
            if( p1<l1 && p2<l2){
                if(nums1[p1]>nums2[p2]){
                    mdn1=nums2[p2];
                    p2++;
                }else{
                    mdn1=nums1[p1];
                    p1++;
                }
            } else if( p1<l1){
                mdn1=nums1[p1];
                p1++;
            }else{
                mdn1=nums2[p2];
                p2++;
            }
        }
        if((l1+l2)%2==1) return mdn1;
        return ((mdn1+mdn2)/2.00);
    }
};