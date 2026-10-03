class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,high=matrix.size()-1;
        int row=0;
        while(low<=high){
            int mid= low + (high-low)/2;
            if(matrix[mid][0]==target) return true;
            //else if( mid<= high -1 && matrix[mid+1][0]==target) return true;
            //else if( mid<= high -1 && matrix[mid][0]<target && matrix[mid+1][0]>target){
            //    row=mid;
            //    break;
            //} 
            else if(matrix[mid][0]>target){
                high = mid-1;
            }
            else if(matrix[mid][0]<target){
                low = mid+1;
            }
        }
        if(high<0) return false;
        row=high;
        low=0;
        high=matrix[0].size()-1;
        while(low<=high){
            int mid= low + (high-low)/2;
            if(matrix[row][mid]==target) return true;
            else if(matrix[row][mid]>target){
                high = mid-1;
            }
            else if(matrix[row][mid]<target){
                low = mid+1;
            }
        }
        return false;

    }
};
// here remember to check if high is -1 or not becuase it might become negative also, so if will lead row to be -1
// then it will give overflow error