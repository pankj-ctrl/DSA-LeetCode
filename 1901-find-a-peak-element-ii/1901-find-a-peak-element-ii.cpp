class Solution {
private:
 int Row(vector<vector<int>>&nums,int col){
    int n = nums.size();
        int maxRow = 0;
        
        for (int i = 1; i < n; i++) {
            if (nums[i][col] > nums[maxRow][col]) {
                maxRow = i;
            }
        }
        return maxRow;
 }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0,high=mat[0].size()-1;
        int m=mat[0].size();
        while(low<=high){
            int mid=low+(high-low)/2;
            int row=Row(mat,mid);
            int left=mid-1>=0 ? mat[row][mid-1]:-1;
            int right=mid+1<m ? mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right){
                return{row,mid};
            }else if(mat[row][mid]<left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};