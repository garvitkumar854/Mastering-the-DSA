// Stock Buy & Sell
/* You're given an array "prices" where prices[i] is the price of a given stock on the 1st day.
you want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot acheive any profit, return 0

prices = [7,1,5,3,6,4], return max profit
example for max profit for above array is: Buy on 1 and sell on 6 so 1-6 = 5

Logic for solution
Buy stock on minimum price of stock , and sell stock on maximum price

Let every day is a selling day and find maximum profit of all days.

*/

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int maxProfit = 0, bestBuy = prices[0];
    for(int i=1; i<prices.size(); i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]); 
    }
    return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;

    return 0;
}