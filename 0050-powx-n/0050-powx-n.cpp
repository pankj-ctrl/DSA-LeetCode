class Solution {
    double pow(double x,long long n){
        if(n==0)return 1;
        if (n == 1) return x;
        if(n%2==1){
            return x*pow(x,n-1);
        }else{
            return pow(x*x,n/2);
        }
    }
public:
    double myPow(double x, int n) {
        long temp=n;
        if(temp<0){
            return (1.0/pow(x,-temp));
        }
        return pow(x,temp);
    }
};