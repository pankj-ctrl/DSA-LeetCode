class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int cnt_max=0;
        int index=0;
        int row=mat.size();
        int col=mat[0].size();
        for(int i=0;i<row;i++){
            int cnt=0;
            for(int j=0;j<col;j++){
                cnt+=mat[i][j];
            }
            if(cnt>cnt_max){
                cnt_max=cnt;
                index=i;
            }
        }
        return {index,cnt_max};
    }
};