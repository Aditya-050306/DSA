class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> frequency(100,0);
        vector<int> result;
        for(int i:nums){
            frequency[i]++;
            if(frequency[i]==2){
                result.push_back(i);
            }
        }
        return result;
    }
};