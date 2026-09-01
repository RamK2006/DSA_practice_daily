class Solution {
public:
    bool checkKthBit(int n, int k) {
        // code here
        if( n & (1<<k)) return true;
        else return false;
    }
};
// checks if kth bit is set or not
