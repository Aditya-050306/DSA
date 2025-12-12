class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int left=0;    //left pointer
        int right=height.size()-1;   //right pointer
        while(left<right){
            int width= right-left;
            int ht=min(height[left],height[right]);  //calculation of height of container formed
            int area=width*ht;
            maxwater=max(maxwater,area);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxwater;
    }
};