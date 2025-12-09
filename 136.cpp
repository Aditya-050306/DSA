class Solution {
    public int singleNumber(int[] nums) {
        int result=0;
        for(int i: nums){
            result=result^i;    //Bitwise XOR operation     n^n=0     n^0=n
        }
        return result;
    }
}