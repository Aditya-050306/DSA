class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if (i > 0 && nums[i] == nums[i - 1])continue;  //check for duplicate
                int low=i+1,high=n-1;
                while(low<high){
                    long long sum=(long long)nums[i]+nums[low]+nums[high];
                    if(sum==0){
                        ans.push_back({nums[i],nums[low],nums[high]});
                        low++;
                        high--;
                        while(low<high && nums[low]==nums[low-1]) low++;
                        while(low<high  && nums[high]==nums[high+1])high--;                      
                    }
                    else if(sum<0){
                        low++;
                    }else{
                        high--;
                    }
                }
            
        }
        return ans;
    }
};