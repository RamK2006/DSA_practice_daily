int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int left=0;
    int total=0;
    int start =0;
    if(A.size()==1 || A.size()==0) return 0;
    for(int i=0;i<A.size();i++){
        left += A[i]-B[i];
        total += A[i]-B[i];
        
        if(left<0){
            left =0;
            start = i+1;
        }
    }
    if(total>0){
        return start;
    }else return -1;
}
