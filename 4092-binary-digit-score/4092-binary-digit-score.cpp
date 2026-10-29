class Solution {
public:
    int calculateScore(int a, int b) {
        bitset<8>s1(a);
        bitset<8>s2(b);
        int sum1= s1.count();
        int sum2=s2.count();
        if(sum1>=sum2) return(sum1*sum2);
        else{
            if(sum2==0) return 0;
            int val=sum2/sum1;
            return val;
        }
    }
};