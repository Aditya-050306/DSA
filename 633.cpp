#define ll long long
class Solution {
public:
    bool judgeSquareSum(int c) {
        ll left=0;
        ll right=sqrt(c);

        while(left<=right){
            ll sum= left*left + right*right;

            if(sum==c){
                return true;
            }
            else if(sum>c){
                right--;
            }
            else{
                left++;
            }
        }
        return false;
    }
};