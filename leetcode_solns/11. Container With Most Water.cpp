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

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int h;
        int maxi=-1;
        while(l<r){
            h=min(height[l],height[r]);
            int area= (r-l)*h;
            maxi= max(maxi, area);
            if(height[l]>height[r]) r--;
            else l++;
        }
        return maxi;
    }
};

//2nd try this time also 100% beats, but i doubt if equal heights can cause confustion

// on this, gpt says no u don't need that,
//reason= the current pair has already been evaluated,
// and at least one of those equal-height boundaries can never participate in a better answer with any narrower interval.