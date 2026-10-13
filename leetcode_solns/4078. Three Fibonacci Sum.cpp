class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n%2!=0) return false;
        long long c=n/2;
        long long x=5*c*c;
        long long p1=sqrt(x+4);
        long long p2=sqrt(x-4);
        if(p1*p1==x+4 || p2*p2==x-4) return true;
        return false;
    }
};

// approach 1

class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a=2,b=4;
        if(n==2 || n==4) return true;
        while(true){
            if(a+b==n) return true;
            else if(a+b>n) return false;
            int c=a+b;
            a=b;
            b=c;
        }
        return false;
    }
};

//approach 2, better one