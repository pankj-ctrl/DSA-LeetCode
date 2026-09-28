class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        int freq,val;
        vector<int> ans;
        for(int i=0;i<n/2;i++){
            freq=nums[2*i];
            val=nums[2*i+1];
            for(int j=0;j<freq;j++){
                ans.push_back(val);
            }
        }
        return ans;
    }
};