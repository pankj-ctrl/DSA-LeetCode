class Solution {
private:
 void generate(int open,int close,int n,string s,vector<string>&ans){
    if(open>n) return;
    if(open == close && (open+close)==2*n){
        ans.push_back(s);
        return;
    }
    if(open<n){
        generate(open+1,close,n,s+'(',ans);
    }
    if(open>close){
        generate(open,close+1,n,s+')',ans);
    }
 }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generate(0,0,n,"",ans);
        return ans;
    }
};