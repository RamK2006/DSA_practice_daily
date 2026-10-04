class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int p1=0;// will stay at beginning of substring
        //int p2=0;// will be used to traverse through the array
        int maxi=1;
        if(s.empty()) return 0;
        unordered_set<char> p;
        for(int i=0;i<s.size();i++){
            while (p.count(s[i])) {
                p.erase(s[p1]);
                p1++;
            }
            p.insert(s[i]);
            maxi= max(i-p1+1, maxi);
        }
        return maxi;
    }
};
//bhagwan jane kese optimize kru isko