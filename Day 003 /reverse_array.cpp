#include <vector>
#include <algorithm> // required for std:: reverse 
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        //use std:: reverse from the<algorithm> library 
        // it reverses the order of elements in the range [first,last)
        std::reverse(arr.begin(), arr.end());
    }
};
