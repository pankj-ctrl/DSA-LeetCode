class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int n= nums.size();
        maxi=nums[n-1];
        int cnt=1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]!=maxi){
                cnt++;
                maxi=nums[i];
            }
            if(cnt == 3){
                return nums[i];
            }
        }
       return nums[n-1];
    }
};