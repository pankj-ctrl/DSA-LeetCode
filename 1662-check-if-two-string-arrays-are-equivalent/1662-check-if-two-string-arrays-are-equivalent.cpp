class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string stri1 ="";
        string stri2="";
    
        for(int i=0;i<word1.size();i++){
            stri1+=word1[i];   
    }
    for(int i=0;i<word2.size();i++){
        stri2+=word2[i];
    }
    return stri1==stri2;
}
};