#include<vector> 
#include<algorithm> 
class Solution {
  public:
    // Function find majority
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
       vector<int> result;
       if (nums.empty()){
           return result ;
       }
       int candidate1 = 0, count1 = 0;
       int candidate2 = 0, count2 = 0;
       
       //first pass:find potential candidates
       for (int num : nums) {
           if (num == candidate1) {
               count1++;
           } else if (num == candidate2) {
               count2++;
           } else if (count1 == 0){
               candidate1 = num;
               count1 = 1;
           } else if (count2 == 0) {
               candidate2 = num;
               count2 = 1;
           } else {
               count1--;
               count2--;
           }
       }
       //second pass: verify candidates
       count1 = 0;
       count2 = 0;
       for (int num : nums) {
           if (num == candidate1) {
               count1++;
           } else if (num == candidate2)
        {//use else if to avoid double counting if candidate1 == candidate2
                    count2++;
       }
    }
    
        int n = nums.size();
        if (count1>n / 3){
            result.push_back(candidate1);
        }
        if (count2> n/3 && candidate1 != candidate2) {//ensure candidate2 is distinct and also a majarity
                    result.push_back(candidate2);
            } 
            //add this line to sort the result vector
            sort(result.begin(),
            result.end()); //requires #include <algorithm>
        return result;
    }
};
