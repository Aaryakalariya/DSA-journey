#include <iostream>
#include <vector>
#include <unordered_set>
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(std::vector<int> &arr) {
        // Your code here
       std::unordered_set<int> present; //use a hash set for 0(1) average lookups
       for (int num : arr ){
           if (num > 0) { //only store postivie numers
           present.insert(num);
       }
    }
    
    int i = 1; //start chechking from 1
    while (present.count(i)) {//while 'i' is present in the set 
        i++; //increment to the next number 
    }
    
    return i ; //'i' is the smallest positive missing numbers 
} //this'}' closed the smallest positive missing function }; //this'}' closes the solution class definitaion

};
