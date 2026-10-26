class Solution {
private:
 long long calHours(vector<int> &piles,int mid){
    int n=piles.size();
    long long sum=0;
    for(int i=0;i<n;i++){
        sum += (piles[i] + mid - 1) / mid;
    }
    return sum;
 }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(calHours(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};