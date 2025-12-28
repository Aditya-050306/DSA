#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr, int target, int low, int high){
    if(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            return binarySearch(arr,target,low,mid-1);
        }
        else{
            return binarySearch(arr,target,mid+1,high);
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int target=3;
    cout<<binarySearch(arr,target,0,arr.size()-1)<<endl;
    return 0;
}