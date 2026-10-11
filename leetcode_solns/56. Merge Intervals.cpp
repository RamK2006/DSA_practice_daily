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
//ai generated code:

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        if(intervals.size()==0) return {};
        for(int i=0;i<intervals.size();i++){
            if(ans.empty() || intervals[i][0]>ans.back()[1]) ans.push_back(intervals[i]);
            else ans.back()[1]= max(ans.back()[1],intervals[i][1]);
        }
        return ans;
    }
};

