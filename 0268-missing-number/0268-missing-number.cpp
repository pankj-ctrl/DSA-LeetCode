class Solution {
    bool isPresent(vector<int>&nums,int val){
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==val){
                return true;
            }else if(nums[mid]>val){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
public:
    int missingNumber(vector<int>& nums) {
        int max=nums.size();
        sort(nums.begin(),nums.end());
        int val=-1;
        for(int i=0;i<=max;i++){
            if(isPresent(nums,i)==false){
                val=i;
            }
        }
        return val;
    }
};