#include <iostream>
using namespace std;
#include <climits>

void maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    // cout << bestBuy[0] << ",";
  for(int i=1; i<n; i++){
    bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    cout << bestBuy[i] << ",";
  }
  int maxProfit = 0; 
  for(int i=0; i<n; i++){
    int currProfit = prices[i] - bestBuy[i];
    maxProfit = max(maxProfit, currProfit);
  }
  cout << "Max profit = " << maxProfit << "\n" ;
}

int main(){
  int prices[6] = {7,6,5,4,3,2};
  int n = sizeof(prices) / sizeof(int);

  maxProfit(prices, n);
  return 0;
}