class Solution {
public:
    double myPow(double x, int n) {
        long binary =n;
        double result=1;
        if(n<0){
            binary=-binary;
            x=1/x;
        }
        while(binary>0){
            if(binary%2==1){
                result=result*x;
            }
            x=x*x;
            binary=binary/2;
        }
        return result;
    }
};