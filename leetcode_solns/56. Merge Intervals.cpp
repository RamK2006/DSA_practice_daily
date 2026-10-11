class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //sort(intervals.begin(),intervals[0].end());
        //vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0]) {
            return a[1] < b[1];
        }
        return a[0] < b[0];
    });

        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=intervals[i-1][1]){
                intervals[i-1][1]= max(intervals[i-1][1],intervals[i][1]);
                intervals.erase(intervals.begin() + i);
                i--;
            }
        }
        return intervals;
    }
    
};


// could be the worst psbl passing solution for this question
//5% beats
//sorting also sucks for such arrays

//trying new approach:
