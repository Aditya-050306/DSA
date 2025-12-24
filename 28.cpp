class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        for(int i=0;i<=n-m;i++){
            int x=0;
            while(x<m && haystack[i+x]==needle[x]){
                x++;
            }
            if(x==m){
                return i;
            }
        }
        return -1;
    }
};