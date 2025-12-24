class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;     //NO carry would generate
                return digits;  //exit the loop and return the array
            }
            digits[i]=0;   //If carry is generated i.e. digit is 9
        }
        digits.insert(digits.begin(),1);  //if all the digits are 9 then directly insert 1 in the beg. and set rest digits 0
        return digits;
    }
};