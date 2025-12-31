class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=1,h=arr.size()-2;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            if(arr[mid]<arr[mid-1]){
                h=mid-1;
            }
            if(arr[mid]<arr[mid+1]){
                l=mid+1;
            }
        }
        return -1;
    }
};
//1. low is started from 1 because if taken zero than if statement will give an error 
//2. A.T.Q minimun length of array is 3 so index 0 and n-1 will not be an answer