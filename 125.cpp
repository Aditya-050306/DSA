class Solution {
public:
    bool isAlphanumeric(char ch){
        if(ch>='0' && ch<='9' || tolower(ch)>='a' && tolower(ch)<='z'){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int low=0,high=s.length()-1;
        while(low<high){
            if(!isAlphanumeric(s[low])){
                low++;
                continue;
            }
            if(!isAlphanumeric(s[high])){
                high--;
                continue;
            }

            if(tolower(s[low])!=tolower(s[high])){
                return false;
            }
            else{
                low++;
                high--;
            }
        }
        return true;
    }
};