// 100% beats 
class Solution {
public:
    int myAtoi(string s) {
        int i =0;
        while(s[i]==' ') i++;
        int sign= 1;
        if(s[i]=='-'){
            sign=-1;
            i++;
        } else if(s[i]=='+') i++;
        if(!isdigit(s[i])) return 0;
        long long int n=0;
        while(i< s.length()){
            if(!isdigit(s[i])) break;
            n= n*10+ int(s[i]-'0');
            if(n*sign>=INT32_MAX) return INT32_MAX;
            if(n*sign<=INT32_MIN) return INT32_MIN;
            
            i++;
        }
        n*= sign;
        return n;
        
    }
};




// first version of solution that follows striver sheet
class Solution {
public:

    int helper(string s, int i, long long int n, int sign){
        if(n*sign > INT32_MAX) return INT32_MAX;
        else if (n*sign < INT32_MIN) return INT32_MIN;
        if(i> s.size() || !isdigit(s[i])) return (sign)*(n);
        n = n*10 + (s[i]-'0');
        return helper(s, i+1, n, sign);        
    }
    int myAtoi(string s) {
        int i=0;
        while(s[i]== ' ') i++;
        int sign = 1;
        if(s[i]=='-'){
            sign = -1;
            i++;
        } else if(s[i]=='+'){
            sign = 1;
            i++;
        }

        return helper (s, i, 0, sign);

    }
};