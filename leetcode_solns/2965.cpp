class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n= grid.size();
        int miss=-1;
        int two=-1;
        unordered_map <int,int> freq;
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(!freq.count(i)){
                miss=i;
            } else if( freq[i]==2) two=i;
        }
        return {two,miss};
    }
};

//not 100% beats but it solves the question
// first store them into an unordered map, count frequency,
//then go through them and check which are present twice and which has frequency zero