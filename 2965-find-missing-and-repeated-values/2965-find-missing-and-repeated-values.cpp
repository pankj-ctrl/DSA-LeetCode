class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long N = grid.size();
        long long n = N * N; 
        
        // S - SN 
        // S2 - S2N

        long long SN = (n * (n + 1)) / 2;
        long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
        
        long long S = 0, S2 = 0;
        
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                S += grid[i][j];
                S2 += (long long)grid[i][j] * (long long)grid[i][j];
            }
        }
        
        long long val1 = S - SN;   // x - y
        long long val2 = S2 - S2N; // x^2 - y^2
        
        val2 = val2 / val1;        // x + y
        
        long long x = (val1 + val2) / 2;
        long long y = x - val1;
        
        return {(int)x, (int)y};
    }
};