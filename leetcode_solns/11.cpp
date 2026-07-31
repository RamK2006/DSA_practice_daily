class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int wtr= 0;
        int maxi= INT_MIN;
        while(l<r){
            int temp = min(height[l],height[r]);
            wtr= ((r-l)*(temp));
            maxi= max(wtr, maxi);
            if(temp==height[l]) l++;
            else r--;
        }
        return maxi;
    }
};

// it is kinda achievement for me that i did it in first attempt w/o getting wrong 
//yes it is 100% beats solution