class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=-1;
        while(++i<s.size()){
            if(s[i]!=t[i]) return false;
        }
        return true;

    }
};

// valid anagrams