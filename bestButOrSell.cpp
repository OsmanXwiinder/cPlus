#include <iostream>
using namespace std;
#include <vector>

int findMaxProfit( vector<int> prices){
    int maxPro = 0, bestBuy = prices[0];
    for(int i=1; i<prices.size(); i++){
        if(prices[i] > bestBuy){
            maxPro = max(maxPro, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxPro;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << findMaxProfit(prices) << endl;
    return 0; 
}