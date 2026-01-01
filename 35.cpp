class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]==target) return mid;

            else if(nums[mid]<target){
                low=mid+1;
            }

            else{
                high=mid-1;
            }
        }
        return low;   
    }
};
//Why return low:- if target is not found then return low(index)\
becasue it will directly point to the index at which new target\
value has to be inserted after searching and sorting
//Dry Run any example and check