class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n= grid.size();
        vector<int> arr;
        vector<int> freq(n*n+1, 0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                freq[grid[i][j]]++;
            }            
        }
        int m=0,k=0;
        for(int i=1;i<=n*n;i++){
            if(freq[i]==2) m=i;
            if(freq[i]==0) k=i;
        }
        arr.push_back(m);
        arr.push_back(k);
        return arr;
    }
};

// can be optimized ig