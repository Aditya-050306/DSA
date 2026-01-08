class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();  //size of chars array
        int index=0;  //position to write the compressed character
        for(int i=0;i<n;i++){ 
            char ch=chars[i];  //stores the i'th element of array in ch for comparision
            int count=0;  //to count how many time the character appears
            while(i<n && chars[i]==ch){   // Count how many times ch repeats
                count++;
                i++;
            }
            if(count==1){
                chars[index]=ch;  //write the character
                index++;
            }else{
                chars[index]=ch;  //write the character
                index++;
                string s= to_string(count);  //to convert count of character to string
                for(char x :s){  //if count is greater than 9
                    chars[index]=x;  //write each digit of count in array
                    index++;
                }
            }
            i--;  //beacuse i++ is already used in while loop
        }
        chars.resize(index);  //re-size the array
        return index;  //size of the new array
    }
};