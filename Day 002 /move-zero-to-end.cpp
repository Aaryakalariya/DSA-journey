// User function template for C++
#include<vector>
#include<algorithm>//for std::swap

class Solution {
  public:
    void pushZerosToEnd (std::vector<int>&arr) {
        // code here
        int count = 0;
        for  (int i= 0; i < arr.size(); ++i) {
            if (arr[i] != 0) {
                std::swap(arr[i], arr[count++]);
            }
        }
    }
};
