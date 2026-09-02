class Solution {
public:
    void swap(int &a, int &b) {
        // code here
        a= a^b;
        b=a^b;
        a= b^a;
    }
};

// basic but important