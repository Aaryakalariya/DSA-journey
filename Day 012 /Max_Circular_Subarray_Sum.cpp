#include <vector>
#include <numeric> //for std::accumulate
#include <algorithm> //for std::max, std::min
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(std::vector<int> &nums) {

        // your code here
        int n = nums.size();
        if (n==0) return 0;
        
        //kadane's for max subarray sum 
        int max_so_far = nums[0];
        int current_max = nums[0];
        for(int i = 1; i < n; ++i) {
            current_max = std::max(nums[i], current_max + nums[i]);
            max_so_far = std::max(max_so_far,current_max);
        }
        //kadane's for min subarray sum and total sum
        int min_so_far = nums[0];
        int current_min = nums[0];
        int total_sum = nums[0];
        for (int i = 1; i < n; ++i){
            current_min = std::min(nums[i],current_min + nums[i]);
            min_so_far = std::min(min_so_far,current_min);
            total_sum += nums[i];
        }
        
        //if all numbers are negative, the result is the larger negative number
        if (max_so_far < 0 ){
            return max_so_far;
        }
        
        //max of non-circular sum or (total sum-min non-circular sum)
        return std::max(max_so_far,total_sum-min_so_far);
    }
};
