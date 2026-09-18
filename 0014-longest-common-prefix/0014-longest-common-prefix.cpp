class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
            int n= strs.size();
            string ans = "";
            string first = strs[0];
            string last = strs[n-1];
            int mini = min(first.length(), last.length());

            for(int i=0;i<mini;i++){
                if(first[i]!= last[i]) break;
                ans+= first[i];
            }
            return ans;
            
    }
};