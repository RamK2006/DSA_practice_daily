class Solution {
public:
    bool isPalindrome(string s) {
        string p="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                p+= tolower(s[i]);
            }
        }
        int l=0, r=p.size()-1;
        while(l<r){
            if(p[l]!=p[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
//100% beats