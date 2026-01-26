class Solution {
public:
    int maximum69Number(int num) {
        string Str = to_string(num); // convert number to string
        
        for (int i = 0; i < Str.size(); i++) {
            if (Str[i] == '6') {
                Str[i] = '9'; // change the first 6 to 9
                break;           // only one change allowed
            }
        }
        
        return stoi(Str); // convert back to integer
    }
};