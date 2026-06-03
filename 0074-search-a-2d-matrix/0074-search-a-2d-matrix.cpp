class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = rows-1;
        int row = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(matrix[mid][0]<=target && matrix[mid][col-1]>=target){
                row = mid;
                break;
            }
            else if(target < matrix[mid][0]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        if(row==-1){
            return false;
        }
        int start = 0;
        int end = col-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(matrix[row][mid]==target){
                return true;
            }
            else if(target > matrix[row][mid]){
                start=mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
};