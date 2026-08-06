class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        int i=s.size()-1;
        while(i>=0){
            if(!(s[i]==' ')) temp+=s[i];
            else{
                if(temp.size()!=0){
                    reverse(temp.begin(),temp.end());
                    if(ans==" ") ans="";
                    ans+=temp;
                    temp="";
                    ans+=" ";
                }
            } 
            i--;
        }
        if(temp.size()!=0){
            reverse(temp.begin(),temp.end());
            ans+=temp;
        }
        while(ans[ans.size()-1]==' ') ans.erase(ans.size()-1);
        return ans;
    }
};

//21% beats but is in O(n)
// maybe reverse operation must be optimized
