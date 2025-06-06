#include <string>
#include <vector>
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        std::vector<int> freq(26,0); //frequency array for 'a' through 'z'
        //first pass::count character frequencies 
        for (char c: s) {
            freq[c - 'a']++;
        }
        //second pass::find the first character with a frequency of 1
        for (char c:s) {
            if (freq[c-'a'] ==1){
                return c;
            }
        }
        return '$' ; //no non-reoeating character found
    }
};
