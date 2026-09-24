class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies=0;
        for(int i=0;i<candies.size();i++){
            maxCandies=max(candies[i],maxCandies);
        }
        vector<bool> result;
      for(int candy:candies){
        result.push_back(candy+extraCandies >= maxCandies);
      }

      return result;
    }
};