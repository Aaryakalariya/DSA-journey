#include <vector>
#include <iostream>
#include <numeric>//for std::accumulate if needed,but not directly for this solution
class Solution {
  public:
    int maximumProfit(std::vector<int> &prices) {
        // code here
        int totalprofit = 0;
        //iterate throught the price , starting from the second day 
        for (int i = 1; i< prices.size(); ++i) {
            //if the current day's price is greater than the previous day's price,
            // it means we can make a profit by buying on the previous day and selling on the current day.
            
            if (prices[i] > prices[i-1]) {
                totalprofit += (prices[i] - prices[i-1]);
            }
        }
        return totalprofit;
    }
};

//example usage (optional, for testing in a local environment )
/*
int main() {
    solution sol;
    std::vector<int>prices1 = {100,180,260,310,40,535,695};
    std::cout <<"max profit for prices1:"
    << sol.maxprofit(prices1) <<std::endl; //
    expected:865
    
    std::vector<int> prices2 = {7,1,5,3,6,4};
    std::cout <<"max profit for prices2: "
    <<sol.maxprofit (prices2) <<std::endl;//
    expected: 7 (buy at 1 , sell at 5; buy at 3, sell at 6) 
    
    std::vector<int> prices3 = {1,2,3,4,5};
    std::cout <<"max profit for prices3: "
    <<sol.maxprofit(prices3) <<std::endl; //
    expected: 4
    
        std::vector<int> prices4 = {7,6,4,3,1};
        std::cout <<"max profit for prices4: "
        <<sol.maxprofit(prices4) <<std::endl; //
        expected: 0 
        
        return 0;
}
*/
