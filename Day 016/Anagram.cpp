class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        if (s1.length() != s2.length()) {
        }
        int freq[26] ={0}; //assuming only lowercase english alphabets
        
        for (char c : s1) {
            freq[c-'a']++;
        }
        
        for (char c : s2) {
            freq[c-'a']--;
        }
        for (int i=0; i < 26; i++) {
            if (freq[i] !=0) {
                return false;
            }
        }
        return true;
    }
};
