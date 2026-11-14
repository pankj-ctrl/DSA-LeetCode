class Solution {
private: 
 int fun(vector<int>&nums,int pages){
    int cnt=1;
    int ElementArr=0;
    int n=nums.size();

    for(int i=0;i<n;i++){
        if(ElementArr+nums[i]<=pages){
            ElementArr+=nums[i];
        }else{
            cnt++;
            ElementArr=nums[i];
        }
    }
    return cnt;
 }
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(fun(nums,mid)>k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};