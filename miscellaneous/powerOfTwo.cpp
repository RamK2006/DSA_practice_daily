class Solution {
public:
    bool isPowerOfTwo(int n) {
        // code here
        if(n>0 && (n&(n-1))==0) return true;
        return false;
    }
};

// keep in mind n>0
