#include <algorithm> //for std::sort,std::min,std::max
#include <vector> //for std::vector
// User function template for C++
class Solution {
  public:
    int getMinDiff(std::vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        std::sort(arr.begin(), arr.end()); //sort the array
        int ans = arr[n-1] - arr[0]; //initial difference 
        
        for (int i = 1; i<n;i++) {
            //calculate protential min and max heights for current partition
            int min_h = std::min(arr[0]+k, arr[i]-k);
            int max_h = std::max(arr[i-1] + k,arr[n-1]-k);
            
            //if decreasing current element makes it negative,skip
            if(min_h < 0) continue;
            
            ans = std::min(ans,max_h - min_h); //update minimum difference
        }
        return ans;
    }
};
