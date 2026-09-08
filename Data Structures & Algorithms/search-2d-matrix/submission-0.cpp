class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int right = n - 1;
        int top = 0;
        int bottom = m - 1;
        int mid_row;
        int mid;
        bool row_found = false;
        while(top <= bottom){
            mid_row = (top + bottom)/2;
            if(target < matrix[mid_row][0]){
                bottom = mid_row - 1;
            }
            if(target > matrix[mid_row][n-1]){
                top = mid_row + 1;
            }
            
            if(target <= matrix[mid_row][n-1] && target >= matrix[mid_row][0] ){
                row_found = true;
                break;
            }

            

        }
        while(row_found == true && left <= right){
            mid = (left + right)/2;
            if(target < matrix[mid_row][mid]){
                right = mid - 1;
            }
            if(target > matrix[mid_row][mid]){
                left = mid + 1;
            }
            if(target == matrix[mid_row][mid]){
                return true;
            }
        }
        return false;
       
        
        
    }
};
