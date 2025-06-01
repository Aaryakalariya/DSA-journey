#include <iostream>
#include <vector>
class Solution {
  public:
    int maxSubarraySum(const std::vector<int> &arr) {
        // Your code here
        if (arr.empty()) {
            return 0; //or handle as per problem constrains for empty array
        }
        int max_so_far = arr[0];
        int current_max = arr[0];
        
        for (size_t i = 1; i < arr.size(); ++i) {
            current_max = std::max(arr[i],current_max + arr[i]);
            max_so_far = std::max(max_so_far,current_max);
        }
        return max_so_far;
        
    }
};

