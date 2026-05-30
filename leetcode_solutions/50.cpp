class Solution {
public:
    double myPow(double x, int n) {
        long long t= n;
        if(t<0) t=-t;
        double ans = 1.00;
        while(t>0){
            if(t%2==1){
                ans*=x;
                t--;
            }
            else{
                x*=x;
                t/=2;
            }
        }
        if(n<0) return (double)(1.00)/(double)(ans);
        else return (double)(ans);
    }
};

//100% beats 