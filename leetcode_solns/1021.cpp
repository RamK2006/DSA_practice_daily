class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        int i=0;
        string ans="";
        while(i<s.size()){
            if(s[i]=='('){
                depth++;
                if(!(depth==1)) ans+=s[i];
            }
            else if(s[i]==')'){
                depth--;
                if(!(depth==0)) ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};

//yepp 100% beats