class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        bool insidePair=false;   //this helps to determine we are inside the pair or not
        for(char c:s){
            if(c=="|"){
                insidePair=!insidePair;    //converts false to true and vice versa... false->we are outside true-> we are inside
            }
            else if(c=="*" && !insidePair){   //if c=="*" && insidePair=false then count else skip
                count++;
            }
        }
        return count;
    }
};