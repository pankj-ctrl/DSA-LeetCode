class Solution {
private:
 void func(int idx,int n,vector<int>&nums,vector<int>&arr,vector<vector<int>>&ans){
    if(idx==n){
        ans.push_back(arr);
        return;
    }
    func(idx+1,n,nums,arr,ans);
    arr.push_back(nums[idx]);
     func(idx+1,n,nums,arr,ans);
     arr.pop_back();
 }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        vector<vector<int>> ans;
        int n=nums.size();
        func(0,n,nums,arr,ans);
        return ans;
    }
};