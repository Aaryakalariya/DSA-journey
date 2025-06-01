#include <iostream>
#include <vector>
#include <algorithm> //required for std::min and std::max
class Solution {
  public:
    int maximumProfit(std::vector<int> &prices) {
        // code here
        if (prices.empty()){
            return 0;
        }
        int minprice = prices [0];
        int maxprofit = 0;
        for (int i = 1; i < prices.size(); ++i){
            //update the minimum price encountered so far 
            minprice = std::min(minprice,prices[i]);
            //calculate current profit if we sell today 
            int currentprofit = prices[i] - minprice;
            //update the maximum profit found
            maxprofit = std::max(maxprofit,currentprofit);
        }
        return maxprofit;
    }
};

//you can test it with a main function like this:
/*
int main(){
    solution sol;
    std::vector<int> prices1 = {7,1,5,3,6,4};//expected output: 5 (buy at 1 ,sell at 6)
    std::cout<<"max profit 1:" <<sol.maxprofit(prices1) <<std::end1;
    std::vector<int> prices2 = {7,6,4,3,1}; //expected output: 0 (no profit possible)
    std::cout <<"max profit2 : " <<sol.maxprofit(prices2) <<std::end1;
    std::vector<int> prices3 = {1,2}; //expected output: 1
    std::cout <<"max profit 3 : " <<sol.maxprofit(prices3) ,,std::end1;
    std::vector<int> prices4 = {}; //expected output:0
    std::cout <<"max profit 4:" <<sol.maxprofit(prices4) <<std::end1;
    
    return 0;
}   
*/
