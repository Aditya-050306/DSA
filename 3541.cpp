class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> frequency(26,0);
        int vowelMax=0;
        int consoMax=0;
        for(char c: s){
            frequency[c-'a']++;
        }
        for(char c:s){
            int count=frequency[c-'a'];
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vowelMax=max(vowelMax,count);
            }
            else{
                consoMax=max(consoMax,count);
            }
        }
    return (vowelMax+consoMax);
    }
};