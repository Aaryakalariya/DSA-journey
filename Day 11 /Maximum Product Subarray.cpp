#include <vector>
#include <algorithm> 
// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
       int maxProduct(std::vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
        if (n == 0) {
            return 0; //handel empty array case 
        } 
        
        long long max_so_far = arr[0];
        long long min_so_far = arr[0];
        long long result = arr[0];
        
        for (int i = 1; i < n; ++i) {
            long long current_num = arr[i];
            
            //store max_so_far temporarily because it will be updated 
            long long temp_max =
            std::max({current_num,max_so_far * 
            current_num, min_so_far * current_num});
                min_so_far =
                std::min({current_num, max_so_far *
                    current_num , min_so_far * current_num});
                    
                    max_so_far = temp_max;
                    
                    result = std::max(result,max_so_far);
             }
             return result;
    }
};
