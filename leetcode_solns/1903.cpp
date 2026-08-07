class Solution {
public:
    string largestOddNumber(string num) {
        char n= num[num.size()-1];
        if((n-'0')%2==1) return num;
        else{
            int i=num.size();
            while(--i>=0){
                if((num[i]-'0')%2==1){
                    return num.substr(0,i+1); 
                }
            }
        }
        return "";
    }
};
//pata nahi aajkal n complexity me bhi 100% beats nai aarhe