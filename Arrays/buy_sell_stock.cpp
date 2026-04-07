// buy and sell stock problem || time complexity O(n)

#include<iostream>
using namespace std;

int main(){
    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(prices[0]);
    int bestBuy = prices[0],maxProfit = 0;

    for(int i=1;i<n;i++){
        if(prices[i]>bestBuy){
            maxProfit = max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    cout<<"Max Profit: "<<maxProfit<<endl;
    return 0;
}