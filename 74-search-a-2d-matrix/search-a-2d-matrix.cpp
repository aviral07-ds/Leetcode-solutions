class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int M=matrix.size();
        int N=matrix[0].size();
        int start=0,end=N*M-1;
        int row_index,col_index,mid;

        while(start<=end)
        {
            mid=start+(end-start)/2;
            row_index=mid/N;
            col_index=mid%N;

            if(matrix[row_index][col_index]==target)
            return 1;

            else if(matrix[row_index][col_index]<target)
            start=mid+1;

            else
            end=mid-1;
        }
        return 0;
    }
};