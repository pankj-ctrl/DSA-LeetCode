class Solution {
private:
 int first(vector<int>&nums,int x){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==x){
            first=mid;
            high=mid-1;
        }else if(nums[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return first;
 }

 int last(vector<int>&nums,int x){
    int low=0;
    int high=nums.size()-1;
    int last=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==x){
            last=mid;
            low=mid+1;
        }else if(nums[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return last;
 }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstV=first(nums,target);
        if(firstV==-1) return{-1,-1};
        int lastV= last(nums,target);
        return {firstV,lastV};
    }
};