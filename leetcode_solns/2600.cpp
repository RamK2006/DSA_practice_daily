class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum=0;
        if(k<numOnes) return k;
        else{
            if(k-numOnes< numZeros) sum+=numOnes;
            else{
                sum+=numOnes;
                sum-=(k-numZeros-numOnes);
            }
            
        }
        return sum;
    }
};

//basic maths question -> 100% beats in this one