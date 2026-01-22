class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long long sum1=0;
        long long sum2=0;
        long long a;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<9){
                sum2+=nums[i];
            }
            else{
                while(nums[i]>0){
                    a=nums[i]%10;
                    sum2+=a;
                    nums[i]/=10;
                }
            }
        }
        return abs(sum1-sum2);
    }
};