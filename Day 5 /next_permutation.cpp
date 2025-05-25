// User function Template for C++
#include <vector>
#include <algorithm> //for std::next_permutation 
class Solution {
  public:
    void nextPermutation(vector<int>& nums) {
        // code here
        //std::next_permutation is a standard library function that does exactly this
        //it rearrange the element in the range [first,last) into the next 
        //lexicographically greater permutation.
        
        //if no such permutation exists ,it rearrange the elements into the 
        //first (sorted) permutation and returns false.otherwish, it return true.
        std::next_permutation(nums.begin(),nums.end());
    }
};
